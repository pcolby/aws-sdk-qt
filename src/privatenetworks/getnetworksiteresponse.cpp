// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworksiteresponse.h"
#include "getnetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteResponse
 * \brief The GetNetworkSiteResponse class provides an interace for PrivateNetworks GetNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkSite
 */

/*!
 * Constructs a GetNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkSiteResponse::GetNetworkSiteResponse(
        const GetNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new GetNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkSiteRequest * GetNetworkSiteResponse::request() const
{
    Q_D(const GetNetworkSiteResponse);
    return static_cast<const GetNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetNetworkSite \a response.
 */
void GetNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteResponsePrivate
 * \brief The GetNetworkSiteResponsePrivate class provides private implementation for GetNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkSiteResponsePrivate object with public implementation \a q.
 */
GetNetworkSiteResponsePrivate::GetNetworkSiteResponsePrivate(
    GetNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetNetworkSite response element from \a xml.
 */
void GetNetworkSiteResponsePrivate::parseGetNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
