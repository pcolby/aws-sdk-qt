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

#include "updatecampaigndialerconfigresponse.h"
#include "updatecampaigndialerconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignDialerConfigResponse
 * \brief The UpdateCampaignDialerConfigResponse class provides an interace for ConnectCampaigns UpdateCampaignDialerConfig responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignDialerConfig
 */

/*!
 * Constructs a UpdateCampaignDialerConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCampaignDialerConfigResponse::UpdateCampaignDialerConfigResponse(
        const UpdateCampaignDialerConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new UpdateCampaignDialerConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateCampaignDialerConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCampaignDialerConfigRequest * UpdateCampaignDialerConfigResponse::request() const
{
    Q_D(const UpdateCampaignDialerConfigResponse);
    return static_cast<const UpdateCampaignDialerConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns UpdateCampaignDialerConfig \a response.
 */
void UpdateCampaignDialerConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCampaignDialerConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignDialerConfigResponsePrivate
 * \brief The UpdateCampaignDialerConfigResponsePrivate class provides private implementation for UpdateCampaignDialerConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignDialerConfigResponsePrivate object with public implementation \a q.
 */
UpdateCampaignDialerConfigResponsePrivate::UpdateCampaignDialerConfigResponsePrivate(
    UpdateCampaignDialerConfigResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns UpdateCampaignDialerConfig response element from \a xml.
 */
void UpdateCampaignDialerConfigResponsePrivate::parseUpdateCampaignDialerConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCampaignDialerConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
