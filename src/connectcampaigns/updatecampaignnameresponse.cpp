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
