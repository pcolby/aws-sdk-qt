// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagvaluesresponse.h"
#include "gettagvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagValuesResponse
 * \brief The GetTagValuesResponse class provides an interace for ResourceGroupsTagging GetTagValues responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getTagValues
 */

/*!
 * Constructs a GetTagValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagValuesResponse::GetTagValuesResponse(
        const GetTagValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new GetTagValuesResponsePrivate(this), parent)
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
 * Parses a successful ResourceGroupsTagging GetTagValues \a response.
 */
void GetTagValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagValuesResponsePrivate
 * \brief The GetTagValuesResponsePrivate class provides private implementation for GetTagValuesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetTagValuesResponsePrivate object with public implementation \a q.
 */
GetTagValuesResponsePrivate::GetTagValuesResponsePrivate(
    GetTagValuesResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging GetTagValues response element from \a xml.
 */
void GetTagValuesResponsePrivate::parseGetTagValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagValuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
