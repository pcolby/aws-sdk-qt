// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresourceresponse.h"
#include "getnetworkresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResourceResponse
 * \brief The GetNetworkResourceResponse class provides an interace for PrivateNetworks GetNetworkResource responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkResource
 */

/*!
 * Constructs a GetNetworkResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResourceResponse::GetNetworkResourceResponse(
        const GetNetworkResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetNetworkResourceResponsePrivate(this), parent)
{
    setRequest(new GetNetworkResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkResourceRequest * GetNetworkResourceResponse::request() const
{
    Q_D(const GetNetworkResourceResponse);
    return static_cast<const GetNetworkResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetNetworkResource \a response.
 */
void GetNetworkResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResourceResponsePrivate
 * \brief The GetNetworkResourceResponsePrivate class provides private implementation for GetNetworkResourceResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkResourceResponsePrivate object with public implementation \a q.
 */
GetNetworkResourceResponsePrivate::GetNetworkResourceResponsePrivate(
    GetNetworkResourceResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetNetworkResource response element from \a xml.
 */
void GetNetworkResourceResponsePrivate::parseGetNetworkResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
