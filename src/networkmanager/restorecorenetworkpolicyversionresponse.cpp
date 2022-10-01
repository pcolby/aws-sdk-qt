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

#include "restorecorenetworkpolicyversionresponse.h"
#include "restorecorenetworkpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RestoreCoreNetworkPolicyVersionResponse
 * \brief The RestoreCoreNetworkPolicyVersionResponse class provides an interace for NetworkManager RestoreCoreNetworkPolicyVersion responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::restoreCoreNetworkPolicyVersion
 */

/*!
 * Constructs a RestoreCoreNetworkPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreCoreNetworkPolicyVersionResponse::RestoreCoreNetworkPolicyVersionResponse(
        const RestoreCoreNetworkPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new RestoreCoreNetworkPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new RestoreCoreNetworkPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreCoreNetworkPolicyVersionRequest * RestoreCoreNetworkPolicyVersionResponse::request() const
{
    Q_D(const RestoreCoreNetworkPolicyVersionResponse);
    return static_cast<const RestoreCoreNetworkPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager RestoreCoreNetworkPolicyVersion \a response.
 */
void RestoreCoreNetworkPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreCoreNetworkPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::RestoreCoreNetworkPolicyVersionResponsePrivate
 * \brief The RestoreCoreNetworkPolicyVersionResponsePrivate class provides private implementation for RestoreCoreNetworkPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RestoreCoreNetworkPolicyVersionResponsePrivate object with public implementation \a q.
 */
RestoreCoreNetworkPolicyVersionResponsePrivate::RestoreCoreNetworkPolicyVersionResponsePrivate(
    RestoreCoreNetworkPolicyVersionResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager RestoreCoreNetworkPolicyVersion response element from \a xml.
 */
void RestoreCoreNetworkPolicyVersionResponsePrivate::parseRestoreCoreNetworkPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreCoreNetworkPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
