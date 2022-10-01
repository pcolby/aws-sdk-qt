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

#include "untagresourcesresponse.h"
#include "untagresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::UntagResourcesResponse
 * \brief The UntagResourcesResponse class provides an interace for ResourceGroupsTagging UntagResources responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::untagResources
 */

/*!
 * Constructs a UntagResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
UntagResourcesResponse::UntagResourcesResponse(
        const UntagResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new UntagResourcesResponsePrivate(this), parent)
{
    setRequest(new UntagResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagResourcesRequest * UntagResourcesResponse::request() const
{
    Q_D(const UntagResourcesResponse);
    return static_cast<const UntagResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTagging UntagResources \a response.
 */
void UntagResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::UntagResourcesResponsePrivate
 * \brief The UntagResourcesResponsePrivate class provides private implementation for UntagResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a UntagResourcesResponsePrivate object with public implementation \a q.
 */
UntagResourcesResponsePrivate::UntagResourcesResponsePrivate(
    UntagResourcesResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging UntagResources response element from \a xml.
 */
void UntagResourcesResponsePrivate::parseUntagResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
