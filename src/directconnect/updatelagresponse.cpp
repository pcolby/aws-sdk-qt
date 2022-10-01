// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelagresponse.h"
#include "updatelagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateLagResponse
 * \brief The UpdateLagResponse class provides an interace for DirectConnect UpdateLag responses.
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
 * \sa DirectConnectClient::updateLag
 */

/*!
 * Constructs a UpdateLagResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLagResponse::UpdateLagResponse(
        const UpdateLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new UpdateLagResponsePrivate(this), parent)
{
    setRequest(new UpdateLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLagRequest * UpdateLagResponse::request() const
{
    Q_D(const UpdateLagResponse);
    return static_cast<const UpdateLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect UpdateLag \a response.
 */
void UpdateLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::UpdateLagResponsePrivate
 * \brief The UpdateLagResponsePrivate class provides private implementation for UpdateLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateLagResponsePrivate object with public implementation \a q.
 */
UpdateLagResponsePrivate::UpdateLagResponsePrivate(
    UpdateLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect UpdateLag response element from \a xml.
 */
void UpdateLagResponsePrivate::parseUpdateLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
