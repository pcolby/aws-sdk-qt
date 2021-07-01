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

#include "deletemetricpolicyresponse.h"
#include "deletemetricpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteMetricPolicyResponse
 * \brief The DeleteMetricPolicyResponse class provides an interace for MediaStore DeleteMetricPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteMetricPolicy
 */

/*!
 * Constructs a DeleteMetricPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMetricPolicyResponse::DeleteMetricPolicyResponse(
        const DeleteMetricPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteMetricPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteMetricPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMetricPolicyRequest * DeleteMetricPolicyResponse::request() const
{
    Q_D(const DeleteMetricPolicyResponse);
    return static_cast<const DeleteMetricPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteMetricPolicy \a response.
 */
void DeleteMetricPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMetricPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteMetricPolicyResponsePrivate
 * \brief The DeleteMetricPolicyResponsePrivate class provides private implementation for DeleteMetricPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteMetricPolicyResponsePrivate object with public implementation \a q.
 */
DeleteMetricPolicyResponsePrivate::DeleteMetricPolicyResponsePrivate(
    DeleteMetricPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteMetricPolicy response element from \a xml.
 */
void DeleteMetricPolicyResponsePrivate::parseDeleteMetricPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMetricPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
