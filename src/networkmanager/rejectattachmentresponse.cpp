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

#include "rejectattachmentresponse.h"
#include "rejectattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RejectAttachmentResponse
 * \brief The RejectAttachmentResponse class provides an interace for NetworkManager RejectAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::rejectAttachment
 */

/*!
 * Constructs a RejectAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
RejectAttachmentResponse::RejectAttachmentResponse(
        const RejectAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new RejectAttachmentResponsePrivate(this), parent)
{
    setRequest(new RejectAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectAttachmentRequest * RejectAttachmentResponse::request() const
{
    Q_D(const RejectAttachmentResponse);
    return static_cast<const RejectAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager RejectAttachment \a response.
 */
void RejectAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::RejectAttachmentResponsePrivate
 * \brief The RejectAttachmentResponsePrivate class provides private implementation for RejectAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RejectAttachmentResponsePrivate object with public implementation \a q.
 */
RejectAttachmentResponsePrivate::RejectAttachmentResponsePrivate(
    RejectAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager RejectAttachment response element from \a xml.
 */
void RejectAttachmentResponsePrivate::parseRejectAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
