// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
