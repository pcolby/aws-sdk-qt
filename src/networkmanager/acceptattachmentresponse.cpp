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

#include "acceptattachmentresponse.h"
#include "acceptattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AcceptAttachmentResponse
 * \brief The AcceptAttachmentResponse class provides an interace for NetworkManager AcceptAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::acceptAttachment
 */

/*!
 * Constructs a AcceptAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptAttachmentResponse::AcceptAttachmentResponse(
        const AcceptAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AcceptAttachmentResponsePrivate(this), parent)
{
    setRequest(new AcceptAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptAttachmentRequest * AcceptAttachmentResponse::request() const
{
    Q_D(const AcceptAttachmentResponse);
    return static_cast<const AcceptAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AcceptAttachment \a response.
 */
void AcceptAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AcceptAttachmentResponsePrivate
 * \brief The AcceptAttachmentResponsePrivate class provides private implementation for AcceptAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AcceptAttachmentResponsePrivate object with public implementation \a q.
 */
AcceptAttachmentResponsePrivate::AcceptAttachmentResponsePrivate(
    AcceptAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AcceptAttachment response element from \a xml.
 */
void AcceptAttachmentResponsePrivate::parseAcceptAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
