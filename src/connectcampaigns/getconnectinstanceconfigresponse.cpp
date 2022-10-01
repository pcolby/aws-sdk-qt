// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
