// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinterconnectresponse.h"
#include "createinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateInterconnectResponse
 * \brief The CreateInterconnectResponse class provides an interace for DirectConnect CreateInterconnect responses.
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
 * \sa DirectConnectClient::createInterconnect
 */

/*!
 * Constructs a CreateInterconnectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInterconnectResponse::CreateInterconnectResponse(
        const CreateInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateInterconnectResponsePrivate(this), parent)
{
    setRequest(new CreateInterconnectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInterconnectRequest * CreateInterconnectResponse::request() const
{
    Q_D(const CreateInterconnectResponse);
    return static_cast<const CreateInterconnectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateInterconnect \a response.
 */
void CreateInterconnectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInterconnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateInterconnectResponsePrivate
 * \brief The CreateInterconnectResponsePrivate class provides private implementation for CreateInterconnectResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateInterconnectResponsePrivate object with public implementation \a q.
 */
CreateInterconnectResponsePrivate::CreateInterconnectResponsePrivate(
    CreateInterconnectResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateInterconnect response element from \a xml.
 */
void CreateInterconnectResponsePrivate::parseCreateInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInterconnectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
