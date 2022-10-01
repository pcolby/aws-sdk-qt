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
