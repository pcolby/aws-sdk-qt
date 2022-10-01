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

#include "stopcampaignresponse.h"
#include "stopcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StopCampaignResponse
 * \brief The StopCampaignResponse class provides an interace for ConnectCampaigns StopCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::stopCampaign
 */

/*!
 * Constructs a StopCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
StopCampaignResponse::StopCampaignResponse(
        const StopCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new StopCampaignResponsePrivate(this), parent)
{
    setRequest(new StopCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCampaignRequest * StopCampaignResponse::request() const
{
    Q_D(const StopCampaignResponse);
    return static_cast<const StopCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns StopCampaign \a response.
 */
void StopCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::StopCampaignResponsePrivate
 * \brief The StopCampaignResponsePrivate class provides private implementation for StopCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StopCampaignResponsePrivate object with public implementation \a q.
 */
StopCampaignResponsePrivate::StopCampaignResponsePrivate(
    StopCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns StopCampaign response element from \a xml.
 */
void StopCampaignResponsePrivate::parseStopCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
