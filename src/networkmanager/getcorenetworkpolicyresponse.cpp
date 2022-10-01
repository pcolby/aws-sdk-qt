// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorenetworkpolicyresponse.h"
#include "getcorenetworkpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkPolicyResponse
 * \brief The GetCoreNetworkPolicyResponse class provides an interace for NetworkManager GetCoreNetworkPolicy responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkPolicy
 */

/*!
 * Constructs a GetCoreNetworkPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreNetworkPolicyResponse::GetCoreNetworkPolicyResponse(
        const GetCoreNetworkPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetCoreNetworkPolicyResponsePrivate(this), parent)
{
    setRequest(new GetCoreNetworkPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreNetworkPolicyRequest * GetCoreNetworkPolicyResponse::request() const
{
    Q_D(const GetCoreNetworkPolicyResponse);
    return static_cast<const GetCoreNetworkPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetCoreNetworkPolicy \a response.
 */
void GetCoreNetworkPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreNetworkPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkPolicyResponsePrivate
 * \brief The GetCoreNetworkPolicyResponsePrivate class provides private implementation for GetCoreNetworkPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkPolicyResponsePrivate object with public implementation \a q.
 */
GetCoreNetworkPolicyResponsePrivate::GetCoreNetworkPolicyResponsePrivate(
    GetCoreNetworkPolicyResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetCoreNetworkPolicy response element from \a xml.
 */
void GetCoreNetworkPolicyResponsePrivate::parseGetCoreNetworkPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreNetworkPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
