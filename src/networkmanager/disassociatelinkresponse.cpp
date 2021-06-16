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

#include "disassociatelinkresponse.h"
#include "disassociatelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateLinkResponse
 * \brief The DisassociateLinkResponse class provides an interace for NetworkManager DisassociateLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::disassociateLink
 */

/*!
 * Constructs a DisassociateLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateLinkResponse::DisassociateLinkResponse(
        const DisassociateLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DisassociateLinkResponsePrivate(this), parent)
{
    setRequest(new DisassociateLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateLinkRequest * DisassociateLinkResponse::request() const
{
    Q_D(const DisassociateLinkResponse);
    return static_cast<const DisassociateLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DisassociateLink \a response.
 */
void DisassociateLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DisassociateLinkResponsePrivate
 * \brief The DisassociateLinkResponsePrivate class provides private implementation for DisassociateLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateLinkResponsePrivate object with public implementation \a q.
 */
DisassociateLinkResponsePrivate::DisassociateLinkResponsePrivate(
    DisassociateLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DisassociateLink response element from \a xml.
 */
void DisassociateLinkResponsePrivate::parseDisassociateLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
