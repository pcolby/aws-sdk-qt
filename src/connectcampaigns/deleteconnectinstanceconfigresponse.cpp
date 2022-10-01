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

#include "deleteconnectinstanceconfigresponse.h"
#include "deleteconnectinstanceconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigResponse
 * \brief The DeleteConnectInstanceConfigResponse class provides an interace for ConnectCampaigns DeleteConnectInstanceConfig responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteConnectInstanceConfig
 */

/*!
 * Constructs a DeleteConnectInstanceConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectInstanceConfigResponse::DeleteConnectInstanceConfigResponse(
        const DeleteConnectInstanceConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new DeleteConnectInstanceConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectInstanceConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectInstanceConfigRequest * DeleteConnectInstanceConfigResponse::request() const
{
    Q_D(const DeleteConnectInstanceConfigResponse);
    return static_cast<const DeleteConnectInstanceConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns DeleteConnectInstanceConfig \a response.
 */
void DeleteConnectInstanceConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectInstanceConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigResponsePrivate
 * \brief The DeleteConnectInstanceConfigResponsePrivate class provides private implementation for DeleteConnectInstanceConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteConnectInstanceConfigResponsePrivate object with public implementation \a q.
 */
DeleteConnectInstanceConfigResponsePrivate::DeleteConnectInstanceConfigResponsePrivate(
    DeleteConnectInstanceConfigResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns DeleteConnectInstanceConfig response element from \a xml.
 */
void DeleteConnectInstanceConfigResponsePrivate::parseDeleteConnectInstanceConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectInstanceConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
