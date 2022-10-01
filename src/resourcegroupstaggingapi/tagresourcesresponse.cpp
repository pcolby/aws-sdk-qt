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

#include "tagresourcesresponse.h"
#include "tagresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingApi {

/*!
 * \class QtAws::ResourceGroupsTaggingApi::TagResourcesResponse
 * \brief The TagResourcesResponse class provides an interace for ResourceGroupsTaggingApi TagResources responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 *
 *
 * \sa ResourceGroupsTaggingApiClient::tagResources
 */

/*!
 * Constructs a TagResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
TagResourcesResponse::TagResourcesResponse(
        const TagResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingApiResponse(new TagResourcesResponsePrivate(this), parent)
{
    setRequest(new TagResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagResourcesRequest * TagResourcesResponse::request() const
{
    Q_D(const TagResourcesResponse);
    return static_cast<const TagResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTaggingApi TagResources \a response.
 */
void TagResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingApi::TagResourcesResponsePrivate
 * \brief The TagResourcesResponsePrivate class provides private implementation for TagResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a TagResourcesResponsePrivate object with public implementation \a q.
 */
TagResourcesResponsePrivate::TagResourcesResponsePrivate(
    TagResourcesResponse * const q) : ResourceGroupsTaggingApiResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingApi TagResources response element from \a xml.
 */
void TagResourcesResponsePrivate::parseTagResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingApi
} // namespace QtAws
