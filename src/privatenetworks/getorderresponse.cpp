// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getorderresponse.h"
#include "getorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetOrderResponse
 * \brief The GetOrderResponse class provides an interace for PrivateNetworks GetOrder responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getOrder
 */

/*!
 * Constructs a GetOrderResponse object for \a reply to \a request, with parent \a parent.
 */
GetOrderResponse::GetOrderResponse(
        const GetOrderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetOrderResponsePrivate(this), parent)
{
    setRequest(new GetOrderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOrderRequest * GetOrderResponse::request() const
{
    Q_D(const GetOrderResponse);
    return static_cast<const GetOrderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetOrder \a response.
 */
void GetOrderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOrderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetOrderResponsePrivate
 * \brief The GetOrderResponsePrivate class provides private implementation for GetOrderResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetOrderResponsePrivate object with public implementation \a q.
 */
GetOrderResponsePrivate::GetOrderResponsePrivate(
    GetOrderResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetOrder response element from \a xml.
 */
void GetOrderResponsePrivate::parseGetOrderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOrderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
