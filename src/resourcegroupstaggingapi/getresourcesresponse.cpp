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

#include "getresourcesresponse.h"
#include "getresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingApi {

/*!
 * \class QtAws::ResourceGroupsTaggingApi::GetResourcesResponse
 * \brief The GetResourcesResponse class provides an interace for ResourceGroupsTaggingApi GetResources responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 *
 *
 * \sa ResourceGroupsTaggingApiClient::getResources
 */

/*!
 * Constructs a GetResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcesResponse::GetResourcesResponse(
        const GetResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingApiResponse(new GetResourcesResponsePrivate(this), parent)
{
    setRequest(new GetResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcesRequest * GetResourcesResponse::request() const
{
    Q_D(const GetResourcesResponse);
    return static_cast<const GetResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTaggingApi GetResources \a response.
 */
void GetResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingApi::GetResourcesResponsePrivate
 * \brief The GetResourcesResponsePrivate class provides private implementation for GetResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a GetResourcesResponsePrivate object with public implementation \a q.
 */
GetResourcesResponsePrivate::GetResourcesResponsePrivate(
    GetResourcesResponse * const q) : ResourceGroupsTaggingApiResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingApi GetResources response element from \a xml.
 */
void GetResourcesResponsePrivate::parseGetResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingApi
} // namespace QtAws
