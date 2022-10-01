// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignresponse.h"
#include "getcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignResponse
 * \brief The GetCampaignResponse class provides an interace for Pinpoint GetCampaign responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaign
 */

/*!
 * Constructs a GetCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignResponse::GetCampaignResponse(
        const GetCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignResponsePrivate(this), parent)
{
    setRequest(new GetCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignRequest * GetCampaignResponse::request() const
{
    Q_D(const GetCampaignResponse);
    return static_cast<const GetCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaign \a response.
 */
void GetCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignResponsePrivate
 * \brief The GetCampaignResponsePrivate class provides private implementation for GetCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignResponsePrivate object with public implementation \a q.
 */
GetCampaignResponsePrivate::GetCampaignResponsePrivate(
    GetCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaign response element from \a xml.
 */
void GetCampaignResponsePrivate::parseGetCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
