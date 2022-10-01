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

#include "getconnectinstanceconfigresponse.h"
#include "getconnectinstanceconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetConnectInstanceConfigResponse
 * \brief The GetConnectInstanceConfigResponse class provides an interace for ConnectCampaigns GetConnectInstanceConfig responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getConnectInstanceConfig
 */

/*!
 * Constructs a GetConnectInstanceConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectInstanceConfigResponse::GetConnectInstanceConfigResponse(
        const GetConnectInstanceConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new GetConnectInstanceConfigResponsePrivate(this), parent)
{
    setRequest(new GetConnectInstanceConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectInstanceConfigRequest * GetConnectInstanceConfigResponse::request() const
{
    Q_D(const GetConnectInstanceConfigResponse);
    return static_cast<const GetConnectInstanceConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns GetConnectInstanceConfig \a response.
 */
void GetConnectInstanceConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectInstanceConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::GetConnectInstanceConfigResponsePrivate
 * \brief The GetConnectInstanceConfigResponsePrivate class provides private implementation for GetConnectInstanceConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetConnectInstanceConfigResponsePrivate object with public implementation \a q.
 */
GetConnectInstanceConfigResponsePrivate::GetConnectInstanceConfigResponsePrivate(
    GetConnectInstanceConfigResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns GetConnectInstanceConfig response element from \a xml.
 */
void GetConnectInstanceConfigResponsePrivate::parseGetConnectInstanceConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectInstanceConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
