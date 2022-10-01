// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectattachmentresponse.h"
#include "createconnectattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateConnectAttachmentResponse
 * \brief The CreateConnectAttachmentResponse class provides an interace for NetworkManager CreateConnectAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createConnectAttachment
 */

/*!
 * Constructs a CreateConnectAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectAttachmentResponse::CreateConnectAttachmentResponse(
        const CreateConnectAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateConnectAttachmentResponsePrivate(this), parent)
{
    setRequest(new CreateConnectAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectAttachmentRequest * CreateConnectAttachmentResponse::request() const
{
    Q_D(const CreateConnectAttachmentResponse);
    return static_cast<const CreateConnectAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateConnectAttachment \a response.
 */
void CreateConnectAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateConnectAttachmentResponsePrivate
 * \brief The CreateConnectAttachmentResponsePrivate class provides private implementation for CreateConnectAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateConnectAttachmentResponsePrivate object with public implementation \a q.
 */
CreateConnectAttachmentResponsePrivate::CreateConnectAttachmentResponsePrivate(
    CreateConnectAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateConnectAttachment response element from \a xml.
 */
void CreateConnectAttachmentResponsePrivate::parseCreateConnectAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
