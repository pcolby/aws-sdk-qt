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

#include "createvpcattachmentresponse.h"
#include "createvpcattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateVpcAttachmentResponse
 * \brief The CreateVpcAttachmentResponse class provides an interace for NetworkManager CreateVpcAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createVpcAttachment
 */

/*!
 * Constructs a CreateVpcAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcAttachmentResponse::CreateVpcAttachmentResponse(
        const CreateVpcAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateVpcAttachmentResponsePrivate(this), parent)
{
    setRequest(new CreateVpcAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcAttachmentRequest * CreateVpcAttachmentResponse::request() const
{
    Q_D(const CreateVpcAttachmentResponse);
    return static_cast<const CreateVpcAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateVpcAttachment \a response.
 */
void CreateVpcAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVpcAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateVpcAttachmentResponsePrivate
 * \brief The CreateVpcAttachmentResponsePrivate class provides private implementation for CreateVpcAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateVpcAttachmentResponsePrivate object with public implementation \a q.
 */
CreateVpcAttachmentResponsePrivate::CreateVpcAttachmentResponsePrivate(
    CreateVpcAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateVpcAttachment response element from \a xml.
 */
void CreateVpcAttachmentResponsePrivate::parseCreateVpcAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
