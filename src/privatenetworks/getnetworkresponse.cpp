// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresponse.h"
#include "getnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResponse
 * \brief The GetNetworkResponse class provides an interace for PrivateNetworks GetNetwork responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetwork
 */

/*!
 * Constructs a GetNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResponse::GetNetworkResponse(
        const GetNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetNetworkResponsePrivate(this), parent)
{
    setRequest(new GetNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkRequest * GetNetworkResponse::request() const
{
    Q_D(const GetNetworkResponse);
    return static_cast<const GetNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetNetwork \a response.
 */
void GetNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResponsePrivate
 * \brief The GetNetworkResponsePrivate class provides private implementation for GetNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkResponsePrivate object with public implementation \a q.
 */
GetNetworkResponsePrivate::GetNetworkResponsePrivate(
    GetNetworkResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetNetwork response element from \a xml.
 */
void GetNetworkResponsePrivate::parseGetNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
