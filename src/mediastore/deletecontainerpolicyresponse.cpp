/*
    Copyright 2013-2018 Paul Colby

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

#include "deletecontainerpolicyresponse.h"
#include "deletecontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteContainerPolicyResponse
 * \brief The DeleteContainerPolicyResponse class provides an interace for MediaStore DeleteContainerPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteContainerPolicy
 */

/*!
 * Constructs a DeleteContainerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerPolicyResponse::DeleteContainerPolicyResponse(
        const DeleteContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerPolicyRequest * DeleteContainerPolicyResponse::request() const
{
    Q_D(const DeleteContainerPolicyResponse);
    return static_cast<const DeleteContainerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteContainerPolicy \a response.
 */
void DeleteContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteContainerPolicyResponsePrivate
 * \brief The DeleteContainerPolicyResponsePrivate class provides private implementation for DeleteContainerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteContainerPolicyResponsePrivate object with public implementation \a q.
 */
DeleteContainerPolicyResponsePrivate::DeleteContainerPolicyResponsePrivate(
    DeleteContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteContainerPolicy response element from \a xml.
 */
void DeleteContainerPolicyResponsePrivate::parseDeleteContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
