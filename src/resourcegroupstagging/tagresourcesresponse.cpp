// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcesresponse.h"
#include "tagresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::TagResourcesResponse
 * \brief The TagResourcesResponse class provides an interace for ResourceGroupsTagging TagResources responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::tagResources
 */

/*!
 * Constructs a TagResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
TagResourcesResponse::TagResourcesResponse(
        const TagResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new TagResourcesResponsePrivate(this), parent)
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
 * Parses a successful ResourceGroupsTagging TagResources \a response.
 */
void TagResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::TagResourcesResponsePrivate
 * \brief The TagResourcesResponsePrivate class provides private implementation for TagResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a TagResourcesResponsePrivate object with public implementation \a q.
 */
TagResourcesResponsePrivate::TagResourcesResponsePrivate(
    TagResourcesResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging TagResources response element from \a xml.
 */
void TagResourcesResponsePrivate::parseTagResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
