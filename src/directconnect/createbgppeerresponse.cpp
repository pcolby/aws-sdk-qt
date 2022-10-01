// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbgppeerresponse.h"
#include "createbgppeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateBGPPeerResponse
 * \brief The CreateBGPPeerResponse class provides an interace for DirectConnect CreateBGPPeer responses.
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
 * \sa DirectConnectClient::createBGPPeer
 */

/*!
 * Constructs a CreateBGPPeerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBGPPeerResponse::CreateBGPPeerResponse(
        const CreateBGPPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateBGPPeerResponsePrivate(this), parent)
{
    setRequest(new CreateBGPPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBGPPeerRequest * CreateBGPPeerResponse::request() const
{
    Q_D(const CreateBGPPeerResponse);
    return static_cast<const CreateBGPPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateBGPPeer \a response.
 */
void CreateBGPPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBGPPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateBGPPeerResponsePrivate
 * \brief The CreateBGPPeerResponsePrivate class provides private implementation for CreateBGPPeerResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateBGPPeerResponsePrivate object with public implementation \a q.
 */
CreateBGPPeerResponsePrivate::CreateBGPPeerResponsePrivate(
    CreateBGPPeerResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateBGPPeer response element from \a xml.
 */
void CreateBGPPeerResponsePrivate::parseCreateBGPPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBGPPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
