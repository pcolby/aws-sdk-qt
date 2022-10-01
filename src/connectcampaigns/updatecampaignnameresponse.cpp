// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecampaignnameresponse.h"
#include "updatecampaignnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignNameResponse
 * \brief The UpdateCampaignNameResponse class provides an interace for ConnectCampaigns UpdateCampaignName responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignName
 */

/*!
 * Constructs a UpdateCampaignNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCampaignNameResponse::UpdateCampaignNameResponse(
        const UpdateCampaignNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new UpdateCampaignNameResponsePrivate(this), parent)
{
    setRequest(new UpdateCampaignNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCampaignNameRequest * UpdateCampaignNameResponse::request() const
{
    Q_D(const UpdateCampaignNameResponse);
    return static_cast<const UpdateCampaignNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns UpdateCampaignName \a response.
 */
void UpdateCampaignNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCampaignNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignNameResponsePrivate
 * \brief The UpdateCampaignNameResponsePrivate class provides private implementation for UpdateCampaignNameResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignNameResponsePrivate object with public implementation \a q.
 */
UpdateCampaignNameResponsePrivate::UpdateCampaignNameResponsePrivate(
    UpdateCampaignNameResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns UpdateCampaignName response element from \a xml.
 */
void UpdateCampaignNameResponsePrivate::parseUpdateCampaignNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCampaignNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
