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

#include "resumecampaignresponse.h"
#include "resumecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ResumeCampaignResponse
 * \brief The ResumeCampaignResponse class provides an interace for ConnectCampaigns ResumeCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::resumeCampaign
 */

/*!
 * Constructs a ResumeCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
ResumeCampaignResponse::ResumeCampaignResponse(
        const ResumeCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new ResumeCampaignResponsePrivate(this), parent)
{
    setRequest(new ResumeCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResumeCampaignRequest * ResumeCampaignResponse::request() const
{
    Q_D(const ResumeCampaignResponse);
    return static_cast<const ResumeCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns ResumeCampaign \a response.
 */
void ResumeCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResumeCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::ResumeCampaignResponsePrivate
 * \brief The ResumeCampaignResponsePrivate class provides private implementation for ResumeCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ResumeCampaignResponsePrivate object with public implementation \a q.
 */
ResumeCampaignResponsePrivate::ResumeCampaignResponsePrivate(
    ResumeCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns ResumeCampaign response element from \a xml.
 */
void ResumeCampaignResponsePrivate::parseResumeCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResumeCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
