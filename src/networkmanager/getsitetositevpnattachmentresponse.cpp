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

#include "getsitetositevpnattachmentresponse.h"
#include "getsitetositevpnattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetSiteToSiteVpnAttachmentResponse
 * \brief The GetSiteToSiteVpnAttachmentResponse class provides an interace for NetworkManager GetSiteToSiteVpnAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getSiteToSiteVpnAttachment
 */

/*!
 * Constructs a GetSiteToSiteVpnAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetSiteToSiteVpnAttachmentResponse::GetSiteToSiteVpnAttachmentResponse(
        const GetSiteToSiteVpnAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetSiteToSiteVpnAttachmentResponsePrivate(this), parent)
{
    setRequest(new GetSiteToSiteVpnAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSiteToSiteVpnAttachmentRequest * GetSiteToSiteVpnAttachmentResponse::request() const
{
    Q_D(const GetSiteToSiteVpnAttachmentResponse);
    return static_cast<const GetSiteToSiteVpnAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetSiteToSiteVpnAttachment \a response.
 */
void GetSiteToSiteVpnAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSiteToSiteVpnAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetSiteToSiteVpnAttachmentResponsePrivate
 * \brief The GetSiteToSiteVpnAttachmentResponsePrivate class provides private implementation for GetSiteToSiteVpnAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetSiteToSiteVpnAttachmentResponsePrivate object with public implementation \a q.
 */
GetSiteToSiteVpnAttachmentResponsePrivate::GetSiteToSiteVpnAttachmentResponsePrivate(
    GetSiteToSiteVpnAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetSiteToSiteVpnAttachment response element from \a xml.
 */
void GetSiteToSiteVpnAttachmentResponsePrivate::parseGetSiteToSiteVpnAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSiteToSiteVpnAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
