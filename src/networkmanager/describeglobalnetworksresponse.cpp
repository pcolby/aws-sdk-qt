// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeglobalnetworksresponse.h"
#include "describeglobalnetworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DescribeGlobalNetworksResponse
 * \brief The DescribeGlobalNetworksResponse class provides an interace for NetworkManager DescribeGlobalNetworks responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::describeGlobalNetworks
 */

/*!
 * Constructs a DescribeGlobalNetworksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGlobalNetworksResponse::DescribeGlobalNetworksResponse(
        const DescribeGlobalNetworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DescribeGlobalNetworksResponsePrivate(this), parent)
{
    setRequest(new DescribeGlobalNetworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGlobalNetworksRequest * DescribeGlobalNetworksResponse::request() const
{
    Q_D(const DescribeGlobalNetworksResponse);
    return static_cast<const DescribeGlobalNetworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DescribeGlobalNetworks \a response.
 */
void DescribeGlobalNetworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGlobalNetworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DescribeGlobalNetworksResponsePrivate
 * \brief The DescribeGlobalNetworksResponsePrivate class provides private implementation for DescribeGlobalNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DescribeGlobalNetworksResponsePrivate object with public implementation \a q.
 */
DescribeGlobalNetworksResponsePrivate::DescribeGlobalNetworksResponsePrivate(
    DescribeGlobalNetworksResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DescribeGlobalNetworks response element from \a xml.
 */
void DescribeGlobalNetworksResponsePrivate::parseDescribeGlobalNetworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGlobalNetworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
