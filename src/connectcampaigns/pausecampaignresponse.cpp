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

#include "pausecampaignresponse.h"
#include "pausecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::PauseCampaignResponse
 * \brief The PauseCampaignResponse class provides an interace for ConnectCampaigns PauseCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::pauseCampaign
 */

/*!
 * Constructs a PauseCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
PauseCampaignResponse::PauseCampaignResponse(
        const PauseCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new PauseCampaignResponsePrivate(this), parent)
{
    setRequest(new PauseCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PauseCampaignRequest * PauseCampaignResponse::request() const
{
    Q_D(const PauseCampaignResponse);
    return static_cast<const PauseCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns PauseCampaign \a response.
 */
void PauseCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PauseCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::PauseCampaignResponsePrivate
 * \brief The PauseCampaignResponsePrivate class provides private implementation for PauseCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a PauseCampaignResponsePrivate object with public implementation \a q.
 */
PauseCampaignResponsePrivate::PauseCampaignResponsePrivate(
    PauseCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns PauseCampaign response element from \a xml.
 */
void PauseCampaignResponsePrivate::parsePauseCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PauseCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
