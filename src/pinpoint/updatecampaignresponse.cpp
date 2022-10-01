// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecampaignresponse.h"
#include "updatecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateCampaignResponse
 * \brief The UpdateCampaignResponse class provides an interace for Pinpoint UpdateCampaign responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateCampaign
 */

/*!
 * Constructs a UpdateCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCampaignResponse::UpdateCampaignResponse(
        const UpdateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateCampaignResponsePrivate(this), parent)
{
    setRequest(new UpdateCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCampaignRequest * UpdateCampaignResponse::request() const
{
    Q_D(const UpdateCampaignResponse);
    return static_cast<const UpdateCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateCampaign \a response.
 */
void UpdateCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateCampaignResponsePrivate
 * \brief The UpdateCampaignResponsePrivate class provides private implementation for UpdateCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateCampaignResponsePrivate object with public implementation \a q.
 */
UpdateCampaignResponsePrivate::UpdateCampaignResponsePrivate(
    UpdateCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateCampaign response element from \a xml.
 */
void UpdateCampaignResponsePrivate::parseUpdateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
