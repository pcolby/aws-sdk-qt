// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
