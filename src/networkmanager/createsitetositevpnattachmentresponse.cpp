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

#include "createsitetositevpnattachmentresponse.h"
#include "createsitetositevpnattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateSiteToSiteVpnAttachmentResponse
 * \brief The CreateSiteToSiteVpnAttachmentResponse class provides an interace for NetworkManager CreateSiteToSiteVpnAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createSiteToSiteVpnAttachment
 */

/*!
 * Constructs a CreateSiteToSiteVpnAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSiteToSiteVpnAttachmentResponse::CreateSiteToSiteVpnAttachmentResponse(
        const CreateSiteToSiteVpnAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateSiteToSiteVpnAttachmentResponsePrivate(this), parent)
{
    setRequest(new CreateSiteToSiteVpnAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSiteToSiteVpnAttachmentRequest * CreateSiteToSiteVpnAttachmentResponse::request() const
{
    Q_D(const CreateSiteToSiteVpnAttachmentResponse);
    return static_cast<const CreateSiteToSiteVpnAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateSiteToSiteVpnAttachment \a response.
 */
void CreateSiteToSiteVpnAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSiteToSiteVpnAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateSiteToSiteVpnAttachmentResponsePrivate
 * \brief The CreateSiteToSiteVpnAttachmentResponsePrivate class provides private implementation for CreateSiteToSiteVpnAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateSiteToSiteVpnAttachmentResponsePrivate object with public implementation \a q.
 */
CreateSiteToSiteVpnAttachmentResponsePrivate::CreateSiteToSiteVpnAttachmentResponsePrivate(
    CreateSiteToSiteVpnAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateSiteToSiteVpnAttachment response element from \a xml.
 */
void CreateSiteToSiteVpnAttachmentResponsePrivate::parseCreateSiteToSiteVpnAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSiteToSiteVpnAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
