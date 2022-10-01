// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registertransitgatewayresponse.h"
#include "registertransitgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayResponse
 * \brief The RegisterTransitGatewayResponse class provides an interace for NetworkManager RegisterTransitGateway responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::registerTransitGateway
 */

/*!
 * Constructs a RegisterTransitGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterTransitGatewayResponse::RegisterTransitGatewayResponse(
        const RegisterTransitGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new RegisterTransitGatewayResponsePrivate(this), parent)
{
    setRequest(new RegisterTransitGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterTransitGatewayRequest * RegisterTransitGatewayResponse::request() const
{
    Q_D(const RegisterTransitGatewayResponse);
    return static_cast<const RegisterTransitGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager RegisterTransitGateway \a response.
 */
void RegisterTransitGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterTransitGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayResponsePrivate
 * \brief The RegisterTransitGatewayResponsePrivate class provides private implementation for RegisterTransitGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RegisterTransitGatewayResponsePrivate object with public implementation \a q.
 */
RegisterTransitGatewayResponsePrivate::RegisterTransitGatewayResponsePrivate(
    RegisterTransitGatewayResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager RegisterTransitGateway response element from \a xml.
 */
void RegisterTransitGatewayResponsePrivate::parseRegisterTransitGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterTransitGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
