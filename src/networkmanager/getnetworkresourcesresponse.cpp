// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresourcesresponse.h"
#include "getnetworkresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourcesResponse
 * \brief The GetNetworkResourcesResponse class provides an interace for NetworkManager GetNetworkResources responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResources
 */

/*!
 * Constructs a GetNetworkResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResourcesResponse::GetNetworkResourcesResponse(
        const GetNetworkResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetNetworkResourcesResponsePrivate(this), parent)
{
    setRequest(new GetNetworkResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkResourcesRequest * GetNetworkResourcesResponse::request() const
{
    Q_D(const GetNetworkResourcesResponse);
    return static_cast<const GetNetworkResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetNetworkResources \a response.
 */
void GetNetworkResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourcesResponsePrivate
 * \brief The GetNetworkResourcesResponsePrivate class provides private implementation for GetNetworkResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourcesResponsePrivate object with public implementation \a q.
 */
GetNetworkResourcesResponsePrivate::GetNetworkResourcesResponsePrivate(
    GetNetworkResourcesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetNetworkResources response element from \a xml.
 */
void GetNetworkResourcesResponsePrivate::parseGetNetworkResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
