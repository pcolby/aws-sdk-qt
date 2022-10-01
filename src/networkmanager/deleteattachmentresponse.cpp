// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteattachmentresponse.h"
#include "deleteattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteAttachmentResponse
 * \brief The DeleteAttachmentResponse class provides an interace for NetworkManager DeleteAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteAttachment
 */

/*!
 * Constructs a DeleteAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAttachmentResponse::DeleteAttachmentResponse(
        const DeleteAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteAttachmentResponsePrivate(this), parent)
{
    setRequest(new DeleteAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAttachmentRequest * DeleteAttachmentResponse::request() const
{
    Q_D(const DeleteAttachmentResponse);
    return static_cast<const DeleteAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteAttachment \a response.
 */
void DeleteAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteAttachmentResponsePrivate
 * \brief The DeleteAttachmentResponsePrivate class provides private implementation for DeleteAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteAttachmentResponsePrivate object with public implementation \a q.
 */
DeleteAttachmentResponsePrivate::DeleteAttachmentResponsePrivate(
    DeleteAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteAttachment response element from \a xml.
 */
void DeleteAttachmentResponsePrivate::parseDeleteAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
