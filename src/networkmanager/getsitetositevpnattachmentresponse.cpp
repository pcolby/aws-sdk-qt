// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
