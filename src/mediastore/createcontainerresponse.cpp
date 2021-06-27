/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcontainerresponse.h"
#include "createcontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::CreateContainerResponse
 * \brief The CreateContainerResponse class provides an interace for MediaStore CreateContainer responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::createContainer
 */

/*!
 * Constructs a CreateContainerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContainerResponse::CreateContainerResponse(
        const CreateContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new CreateContainerResponsePrivate(this), parent)
{
    setRequest(new CreateContainerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContainerRequest * CreateContainerResponse::request() const
{
    return static_cast<const CreateContainerRequest *>(MediaStoreResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaStore CreateContainer \a response.
 */
void CreateContainerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContainerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::CreateContainerResponsePrivate
 * \brief The CreateContainerResponsePrivate class provides private implementation for CreateContainerResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a CreateContainerResponsePrivate object with public implementation \a q.
 */
CreateContainerResponsePrivate::CreateContainerResponsePrivate(
    CreateContainerResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore CreateContainer response element from \a xml.
 */
void CreateContainerResponsePrivate::parseCreateContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContainerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
