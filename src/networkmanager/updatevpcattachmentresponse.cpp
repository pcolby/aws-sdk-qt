// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpcattachmentresponse.h"
#include "updatevpcattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateVpcAttachmentResponse
 * \brief The UpdateVpcAttachmentResponse class provides an interace for NetworkManager UpdateVpcAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateVpcAttachment
 */

/*!
 * Constructs a UpdateVpcAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVpcAttachmentResponse::UpdateVpcAttachmentResponse(
        const UpdateVpcAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateVpcAttachmentResponsePrivate(this), parent)
{
    setRequest(new UpdateVpcAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVpcAttachmentRequest * UpdateVpcAttachmentResponse::request() const
{
    Q_D(const UpdateVpcAttachmentResponse);
    return static_cast<const UpdateVpcAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateVpcAttachment \a response.
 */
void UpdateVpcAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVpcAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateVpcAttachmentResponsePrivate
 * \brief The UpdateVpcAttachmentResponsePrivate class provides private implementation for UpdateVpcAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateVpcAttachmentResponsePrivate object with public implementation \a q.
 */
UpdateVpcAttachmentResponsePrivate::UpdateVpcAttachmentResponsePrivate(
    UpdateVpcAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateVpcAttachment response element from \a xml.
 */
void UpdateVpcAttachmentResponsePrivate::parseUpdateVpcAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVpcAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
