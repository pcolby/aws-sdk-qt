// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettransitgatewayregistrationsresponse.h"
#include "gettransitgatewayregistrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsResponse
 * \brief The GetTransitGatewayRegistrationsResponse class provides an interace for NetworkManager GetTransitGatewayRegistrations responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayRegistrations
 */

/*!
 * Constructs a GetTransitGatewayRegistrationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTransitGatewayRegistrationsResponse::GetTransitGatewayRegistrationsResponse(
        const GetTransitGatewayRegistrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetTransitGatewayRegistrationsResponsePrivate(this), parent)
{
    setRequest(new GetTransitGatewayRegistrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTransitGatewayRegistrationsRequest * GetTransitGatewayRegistrationsResponse::request() const
{
    Q_D(const GetTransitGatewayRegistrationsResponse);
    return static_cast<const GetTransitGatewayRegistrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetTransitGatewayRegistrations \a response.
 */
void GetTransitGatewayRegistrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTransitGatewayRegistrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsResponsePrivate
 * \brief The GetTransitGatewayRegistrationsResponsePrivate class provides private implementation for GetTransitGatewayRegistrationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayRegistrationsResponsePrivate object with public implementation \a q.
 */
GetTransitGatewayRegistrationsResponsePrivate::GetTransitGatewayRegistrationsResponsePrivate(
    GetTransitGatewayRegistrationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetTransitGatewayRegistrations response element from \a xml.
 */
void GetTransitGatewayRegistrationsResponsePrivate::parseGetTransitGatewayRegistrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTransitGatewayRegistrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
