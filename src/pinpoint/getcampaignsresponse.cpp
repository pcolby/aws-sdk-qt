// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignsresponse.h"
#include "getcampaignsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignsResponse
 * \brief The GetCampaignsResponse class provides an interace for Pinpoint GetCampaigns responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaigns
 */

/*!
 * Constructs a GetCampaignsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignsResponse::GetCampaignsResponse(
        const GetCampaignsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignsRequest * GetCampaignsResponse::request() const
{
    Q_D(const GetCampaignsResponse);
    return static_cast<const GetCampaignsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaigns \a response.
 */
void GetCampaignsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignsResponsePrivate
 * \brief The GetCampaignsResponsePrivate class provides private implementation for GetCampaignsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignsResponsePrivate object with public implementation \a q.
 */
GetCampaignsResponsePrivate::GetCampaignsResponsePrivate(
    GetCampaignsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaigns response element from \a xml.
 */
void GetCampaignsResponsePrivate::parseGetCampaignsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
