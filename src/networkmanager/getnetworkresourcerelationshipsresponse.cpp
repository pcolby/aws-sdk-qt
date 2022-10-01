// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresourcerelationshipsresponse.h"
#include "getnetworkresourcerelationshipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceRelationshipsResponse
 * \brief The GetNetworkResourceRelationshipsResponse class provides an interace for NetworkManager GetNetworkResourceRelationships responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResourceRelationships
 */

/*!
 * Constructs a GetNetworkResourceRelationshipsResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResourceRelationshipsResponse::GetNetworkResourceRelationshipsResponse(
        const GetNetworkResourceRelationshipsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetNetworkResourceRelationshipsResponsePrivate(this), parent)
{
    setRequest(new GetNetworkResourceRelationshipsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkResourceRelationshipsRequest * GetNetworkResourceRelationshipsResponse::request() const
{
    Q_D(const GetNetworkResourceRelationshipsResponse);
    return static_cast<const GetNetworkResourceRelationshipsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetNetworkResourceRelationships \a response.
 */
void GetNetworkResourceRelationshipsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResourceRelationshipsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceRelationshipsResponsePrivate
 * \brief The GetNetworkResourceRelationshipsResponsePrivate class provides private implementation for GetNetworkResourceRelationshipsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourceRelationshipsResponsePrivate object with public implementation \a q.
 */
GetNetworkResourceRelationshipsResponsePrivate::GetNetworkResourceRelationshipsResponsePrivate(
    GetNetworkResourceRelationshipsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetNetworkResourceRelationships response element from \a xml.
 */
void GetNetworkResourceRelationshipsResponsePrivate::parseGetNetworkResourceRelationshipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResourceRelationshipsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
