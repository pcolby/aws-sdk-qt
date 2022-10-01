// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignversionsresponse.h"
#include "getcampaignversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsResponse
 * \brief The GetCampaignVersionsResponse class provides an interace for Pinpoint GetCampaignVersions responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignVersions
 */

/*!
 * Constructs a GetCampaignVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignVersionsResponse::GetCampaignVersionsResponse(
        const GetCampaignVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignVersionsRequest * GetCampaignVersionsResponse::request() const
{
    Q_D(const GetCampaignVersionsResponse);
    return static_cast<const GetCampaignVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaignVersions \a response.
 */
void GetCampaignVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsResponsePrivate
 * \brief The GetCampaignVersionsResponsePrivate class provides private implementation for GetCampaignVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignVersionsResponsePrivate object with public implementation \a q.
 */
GetCampaignVersionsResponsePrivate::GetCampaignVersionsResponsePrivate(
    GetCampaignVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaignVersions response element from \a xml.
 */
void GetCampaignVersionsResponsePrivate::parseGetCampaignVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
