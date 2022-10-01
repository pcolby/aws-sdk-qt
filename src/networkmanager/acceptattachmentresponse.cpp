// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptattachmentresponse.h"
#include "acceptattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AcceptAttachmentResponse
 * \brief The AcceptAttachmentResponse class provides an interace for NetworkManager AcceptAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::acceptAttachment
 */

/*!
 * Constructs a AcceptAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptAttachmentResponse::AcceptAttachmentResponse(
        const AcceptAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AcceptAttachmentResponsePrivate(this), parent)
{
    setRequest(new AcceptAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptAttachmentRequest * AcceptAttachmentResponse::request() const
{
    Q_D(const AcceptAttachmentResponse);
    return static_cast<const AcceptAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AcceptAttachment \a response.
 */
void AcceptAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AcceptAttachmentResponsePrivate
 * \brief The AcceptAttachmentResponsePrivate class provides private implementation for AcceptAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AcceptAttachmentResponsePrivate object with public implementation \a q.
 */
AcceptAttachmentResponsePrivate::AcceptAttachmentResponsePrivate(
    AcceptAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AcceptAttachment response element from \a xml.
 */
void AcceptAttachmentResponsePrivate::parseAcceptAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
