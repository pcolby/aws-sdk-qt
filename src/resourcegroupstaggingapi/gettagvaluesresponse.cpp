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

#include "gettagvaluesresponse.h"
#include "gettagvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingApi {

/*!
 * \class QtAws::ResourceGroupsTaggingApi::GetTagValuesResponse
 * \brief The GetTagValuesResponse class provides an interace for ResourceGroupsTaggingApi GetTagValues responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 *
 *
 * \sa ResourceGroupsTaggingApiClient::getTagValues
 */

/*!
 * Constructs a GetTagValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagValuesResponse::GetTagValuesResponse(
        const GetTagValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingApiResponse(new GetTagValuesResponsePrivate(this), parent)
{
    setRequest(new GetTagValuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagValuesRequest * GetTagValuesResponse::request() const
{
    Q_D(const GetTagValuesResponse);
    return static_cast<const GetTagValuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTaggingApi GetTagValues \a response.
 */
void GetTagValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingApi::GetTagValuesResponsePrivate
 * \brief The GetTagValuesResponsePrivate class provides private implementation for GetTagValuesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a GetTagValuesResponsePrivate object with public implementation \a q.
 */
GetTagValuesResponsePrivate::GetTagValuesResponsePrivate(
    GetTagValuesResponse * const q) : ResourceGroupsTaggingApiResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingApi GetTagValues response element from \a xml.
 */
void GetTagValuesResponsePrivate::parseGetTagValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagValuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingApi
} // namespace QtAws
