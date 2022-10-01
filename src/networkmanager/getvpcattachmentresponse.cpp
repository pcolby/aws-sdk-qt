// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
