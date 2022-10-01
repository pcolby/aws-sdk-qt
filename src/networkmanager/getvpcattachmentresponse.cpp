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

#include "getvpcattachmentresponse.h"
#include "getvpcattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetVpcAttachmentResponse
 * \brief The GetVpcAttachmentResponse class provides an interace for NetworkManager GetVpcAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getVpcAttachment
 */

/*!
 * Constructs a GetVpcAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcAttachmentResponse::GetVpcAttachmentResponse(
        const GetVpcAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetVpcAttachmentResponsePrivate(this), parent)
{
    setRequest(new GetVpcAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVpcAttachmentRequest * GetVpcAttachmentResponse::request() const
{
    Q_D(const GetVpcAttachmentResponse);
    return static_cast<const GetVpcAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetVpcAttachment \a response.
 */
void GetVpcAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetVpcAttachmentResponsePrivate
 * \brief The GetVpcAttachmentResponsePrivate class provides private implementation for GetVpcAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetVpcAttachmentResponsePrivate object with public implementation \a q.
 */
GetVpcAttachmentResponsePrivate::GetVpcAttachmentResponsePrivate(
    GetVpcAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetVpcAttachment response element from \a xml.
 */
void GetVpcAttachmentResponsePrivate::parseGetVpcAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
