// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
