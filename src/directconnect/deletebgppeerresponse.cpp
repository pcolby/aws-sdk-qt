// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebgppeerresponse.h"
#include "deletebgppeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteBGPPeerResponse
 * \brief The DeleteBGPPeerResponse class provides an interace for DirectConnect DeleteBGPPeer responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::deleteBGPPeer
 */

/*!
 * Constructs a DeleteBGPPeerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBGPPeerResponse::DeleteBGPPeerResponse(
        const DeleteBGPPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteBGPPeerResponsePrivate(this), parent)
{
    setRequest(new DeleteBGPPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBGPPeerRequest * DeleteBGPPeerResponse::request() const
{
    Q_D(const DeleteBGPPeerResponse);
    return static_cast<const DeleteBGPPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteBGPPeer \a response.
 */
void DeleteBGPPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBGPPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteBGPPeerResponsePrivate
 * \brief The DeleteBGPPeerResponsePrivate class provides private implementation for DeleteBGPPeerResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteBGPPeerResponsePrivate object with public implementation \a q.
 */
DeleteBGPPeerResponsePrivate::DeleteBGPPeerResponsePrivate(
    DeleteBGPPeerResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteBGPPeer response element from \a xml.
 */
void DeleteBGPPeerResponsePrivate::parseDeleteBGPPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBGPPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
