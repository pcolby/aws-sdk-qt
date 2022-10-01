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

#include "startcampaignresponse.h"
#include "startcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StartCampaignResponse
 * \brief The StartCampaignResponse class provides an interace for ConnectCampaigns StartCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::startCampaign
 */

/*!
 * Constructs a StartCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
StartCampaignResponse::StartCampaignResponse(
        const StartCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new StartCampaignResponsePrivate(this), parent)
{
    setRequest(new StartCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCampaignRequest * StartCampaignResponse::request() const
{
    Q_D(const StartCampaignResponse);
    return static_cast<const StartCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns StartCampaign \a response.
 */
void StartCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::StartCampaignResponsePrivate
 * \brief The StartCampaignResponsePrivate class provides private implementation for StartCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StartCampaignResponsePrivate object with public implementation \a q.
 */
StartCampaignResponsePrivate::StartCampaignResponsePrivate(
    StartCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns StartCampaign response element from \a xml.
 */
void StartCampaignResponsePrivate::parseStartCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
