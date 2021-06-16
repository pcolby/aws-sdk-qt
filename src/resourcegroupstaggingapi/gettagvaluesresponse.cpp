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
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagValuesResponse
 * \brief The GetTagValuesResponse class provides an interace for ResourceGroupsTaggingAPI GetTagValues responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::getTagValues
 */

/*!
 * Constructs a GetTagValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagValuesResponse::GetTagValuesResponse(
        const GetTagValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetTagValuesResponsePrivate(this), parent)
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
 * Parses a successful ResourceGroupsTaggingAPI GetTagValues \a response.
 */
void GetTagValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagValuesResponsePrivate
 * \brief The GetTagValuesResponsePrivate class provides private implementation for GetTagValuesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetTagValuesResponsePrivate object with public implementation \a q.
 */
GetTagValuesResponsePrivate::GetTagValuesResponsePrivate(
    GetTagValuesResponse * const q) : ResourceGroupsTaggingAPIResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingAPI GetTagValues response element from \a xml.
 */
void GetTagValuesResponsePrivate::parseGetTagValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagValuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
