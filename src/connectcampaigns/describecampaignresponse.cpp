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

#include "describecampaignresponse.h"
#include "describecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DescribeCampaignResponse
 * \brief The DescribeCampaignResponse class provides an interace for ConnectCampaigns DescribeCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::describeCampaign
 */

/*!
 * Constructs a DescribeCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCampaignResponse::DescribeCampaignResponse(
        const DescribeCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new DescribeCampaignResponsePrivate(this), parent)
{
    setRequest(new DescribeCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCampaignRequest * DescribeCampaignResponse::request() const
{
    Q_D(const DescribeCampaignResponse);
    return static_cast<const DescribeCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns DescribeCampaign \a response.
 */
void DescribeCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::DescribeCampaignResponsePrivate
 * \brief The DescribeCampaignResponsePrivate class provides private implementation for DescribeCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DescribeCampaignResponsePrivate object with public implementation \a q.
 */
DescribeCampaignResponsePrivate::DescribeCampaignResponsePrivate(
    DescribeCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns DescribeCampaign response element from \a xml.
 */
void DescribeCampaignResponsePrivate::parseDescribeCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
