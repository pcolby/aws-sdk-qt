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

#include "getmetricpolicyresponse.h"
#include "getmetricpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetMetricPolicyResponse
 * \brief The GetMetricPolicyResponse class provides an interace for MediaStore GetMetricPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getMetricPolicy
 */

/*!
 * Constructs a GetMetricPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetMetricPolicyResponse::GetMetricPolicyResponse(
        const GetMetricPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetMetricPolicyResponsePrivate(this), parent)
{
    setRequest(new GetMetricPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMetricPolicyRequest * GetMetricPolicyResponse::request() const
{
    return static_cast<const GetMetricPolicyRequest *>(MediaStoreResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaStore GetMetricPolicy \a response.
 */
void GetMetricPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMetricPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetMetricPolicyResponsePrivate
 * \brief The GetMetricPolicyResponsePrivate class provides private implementation for GetMetricPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetMetricPolicyResponsePrivate object with public implementation \a q.
 */
GetMetricPolicyResponsePrivate::GetMetricPolicyResponsePrivate(
    GetMetricPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetMetricPolicy response element from \a xml.
 */
void GetMetricPolicyResponsePrivate::parseGetMetricPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMetricPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
