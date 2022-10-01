// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectattachmentresponse.h"
#include "getconnectattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectAttachmentResponse
 * \brief The GetConnectAttachmentResponse class provides an interace for NetworkManager GetConnectAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectAttachment
 */

/*!
 * Constructs a GetConnectAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectAttachmentResponse::GetConnectAttachmentResponse(
        const GetConnectAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetConnectAttachmentResponsePrivate(this), parent)
{
    setRequest(new GetConnectAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectAttachmentRequest * GetConnectAttachmentResponse::request() const
{
    Q_D(const GetConnectAttachmentResponse);
    return static_cast<const GetConnectAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetConnectAttachment \a response.
 */
void GetConnectAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetConnectAttachmentResponsePrivate
 * \brief The GetConnectAttachmentResponsePrivate class provides private implementation for GetConnectAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectAttachmentResponsePrivate object with public implementation \a q.
 */
GetConnectAttachmentResponsePrivate::GetConnectAttachmentResponsePrivate(
    GetConnectAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetConnectAttachment response element from \a xml.
 */
void GetConnectAttachmentResponsePrivate::parseGetConnectAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
