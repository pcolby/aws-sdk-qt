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
