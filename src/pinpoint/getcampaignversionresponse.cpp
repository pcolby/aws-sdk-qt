// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignversionresponse.h"
#include "getcampaignversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionResponse
 * \brief The GetCampaignVersionResponse class provides an interace for Pinpoint GetCampaignVersion responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignVersion
 */

/*!
 * Constructs a GetCampaignVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignVersionResponse::GetCampaignVersionResponse(
        const GetCampaignVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignVersionResponsePrivate(this), parent)
{
    setRequest(new GetCampaignVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignVersionRequest * GetCampaignVersionResponse::request() const
{
    Q_D(const GetCampaignVersionResponse);
    return static_cast<const GetCampaignVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaignVersion \a response.
 */
void GetCampaignVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionResponsePrivate
 * \brief The GetCampaignVersionResponsePrivate class provides private implementation for GetCampaignVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignVersionResponsePrivate object with public implementation \a q.
 */
GetCampaignVersionResponsePrivate::GetCampaignVersionResponsePrivate(
    GetCampaignVersionResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaignVersion response element from \a xml.
 */
void GetCampaignVersionResponsePrivate::parseGetCampaignVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
