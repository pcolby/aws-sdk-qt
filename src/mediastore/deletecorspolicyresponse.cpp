/*
    Copyright 2013-2019 Paul Colby

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

#include "deletecorspolicyresponse.h"
#include "deletecorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyResponse
 * \brief The DeleteCorsPolicyResponse class provides an interace for MediaStore DeleteCorsPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteCorsPolicy
 */

/*!
 * Constructs a DeleteCorsPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCorsPolicyResponse::DeleteCorsPolicyResponse(
        const DeleteCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteCorsPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCorsPolicyRequest * DeleteCorsPolicyResponse::request() const
{
    Q_D(const DeleteCorsPolicyResponse);
    return static_cast<const DeleteCorsPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteCorsPolicy \a response.
 */
void DeleteCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyResponsePrivate
 * \brief The DeleteCorsPolicyResponsePrivate class provides private implementation for DeleteCorsPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteCorsPolicyResponsePrivate object with public implementation \a q.
 */
DeleteCorsPolicyResponsePrivate::DeleteCorsPolicyResponsePrivate(
    DeleteCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteCorsPolicy response element from \a xml.
 */
void DeleteCorsPolicyResponsePrivate::parseDeleteCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCorsPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
