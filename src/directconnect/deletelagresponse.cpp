// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelagresponse.h"
#include "deletelagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteLagResponse
 * \brief The DeleteLagResponse class provides an interace for DirectConnect DeleteLag responses.
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
 * \sa DirectConnectClient::deleteLag
 */

/*!
 * Constructs a DeleteLagResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLagResponse::DeleteLagResponse(
        const DeleteLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteLagResponsePrivate(this), parent)
{
    setRequest(new DeleteLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLagRequest * DeleteLagResponse::request() const
{
    Q_D(const DeleteLagResponse);
    return static_cast<const DeleteLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteLag \a response.
 */
void DeleteLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteLagResponsePrivate
 * \brief The DeleteLagResponsePrivate class provides private implementation for DeleteLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteLagResponsePrivate object with public implementation \a q.
 */
DeleteLagResponsePrivate::DeleteLagResponsePrivate(
    DeleteLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteLag response element from \a xml.
 */
void DeleteLagResponsePrivate::parseDeleteLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
