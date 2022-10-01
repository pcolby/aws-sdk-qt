/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
