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

#include "deletelifecyclepolicyresponse.h"
#include "deletelifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteLifecyclePolicyResponse
 * \brief The DeleteLifecyclePolicyResponse class provides an interace for MediaStore DeleteLifecyclePolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteLifecyclePolicy
 */

/*!
 * Constructs a DeleteLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLifecyclePolicyResponse::DeleteLifecyclePolicyResponse(
        const DeleteLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLifecyclePolicyRequest * DeleteLifecyclePolicyResponse::request() const
{
    Q_D(const DeleteLifecyclePolicyResponse);
    return static_cast<const DeleteLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteLifecyclePolicy \a response.
 */
void DeleteLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteLifecyclePolicyResponsePrivate
 * \brief The DeleteLifecyclePolicyResponsePrivate class provides private implementation for DeleteLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
DeleteLifecyclePolicyResponsePrivate::DeleteLifecyclePolicyResponsePrivate(
    DeleteLifecyclePolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteLifecyclePolicy response element from \a xml.
 */
void DeleteLifecyclePolicyResponsePrivate::parseDeleteLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
