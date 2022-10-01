// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcorenetworkpolicyresponse.h"
#include "putcorenetworkpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::PutCoreNetworkPolicyResponse
 * \brief The PutCoreNetworkPolicyResponse class provides an interace for NetworkManager PutCoreNetworkPolicy responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::putCoreNetworkPolicy
 */

/*!
 * Constructs a PutCoreNetworkPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutCoreNetworkPolicyResponse::PutCoreNetworkPolicyResponse(
        const PutCoreNetworkPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new PutCoreNetworkPolicyResponsePrivate(this), parent)
{
    setRequest(new PutCoreNetworkPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutCoreNetworkPolicyRequest * PutCoreNetworkPolicyResponse::request() const
{
    Q_D(const PutCoreNetworkPolicyResponse);
    return static_cast<const PutCoreNetworkPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager PutCoreNetworkPolicy \a response.
 */
void PutCoreNetworkPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutCoreNetworkPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::PutCoreNetworkPolicyResponsePrivate
 * \brief The PutCoreNetworkPolicyResponsePrivate class provides private implementation for PutCoreNetworkPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a PutCoreNetworkPolicyResponsePrivate object with public implementation \a q.
 */
PutCoreNetworkPolicyResponsePrivate::PutCoreNetworkPolicyResponsePrivate(
    PutCoreNetworkPolicyResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager PutCoreNetworkPolicy response element from \a xml.
 */
void PutCoreNetworkPolicyResponsePrivate::parsePutCoreNetworkPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutCoreNetworkPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
