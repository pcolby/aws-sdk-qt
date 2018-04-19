/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletecontainerresponse.h"
#include "deletecontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteContainerResponse
 * \brief The DeleteContainerResponse class provides an interace for MediaStore DeleteContainer responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteContainer
 */

/*!
 * Constructs a DeleteContainerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerResponse::DeleteContainerResponse(
        const DeleteContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteContainerResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerRequest * DeleteContainerResponse::request() const
{
    Q_D(const DeleteContainerResponse);
    return static_cast<const DeleteContainerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteContainer \a response.
 */
void DeleteContainerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteContainerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteContainerResponsePrivate
 * \brief The DeleteContainerResponsePrivate class provides private implementation for DeleteContainerResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteContainerResponsePrivate object with public implementation \a q.
 */
DeleteContainerResponsePrivate::DeleteContainerResponsePrivate(
    DeleteContainerResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteContainer response element from \a xml.
 */
void DeleteContainerResponsePrivate::parseDeleteContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
