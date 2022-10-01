// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinterconnectresponse.h"
#include "deleteinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteInterconnectResponse
 * \brief The DeleteInterconnectResponse class provides an interace for DirectConnect DeleteInterconnect responses.
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
 * \sa DirectConnectClient::deleteInterconnect
 */

/*!
 * Constructs a DeleteInterconnectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInterconnectResponse::DeleteInterconnectResponse(
        const DeleteInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteInterconnectResponsePrivate(this), parent)
{
    setRequest(new DeleteInterconnectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInterconnectRequest * DeleteInterconnectResponse::request() const
{
    Q_D(const DeleteInterconnectResponse);
    return static_cast<const DeleteInterconnectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteInterconnect \a response.
 */
void DeleteInterconnectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInterconnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteInterconnectResponsePrivate
 * \brief The DeleteInterconnectResponsePrivate class provides private implementation for DeleteInterconnectResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteInterconnectResponsePrivate object with public implementation \a q.
 */
DeleteInterconnectResponsePrivate::DeleteInterconnectResponsePrivate(
    DeleteInterconnectResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteInterconnect response element from \a xml.
 */
void DeleteInterconnectResponsePrivate::parseDeleteInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInterconnectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
