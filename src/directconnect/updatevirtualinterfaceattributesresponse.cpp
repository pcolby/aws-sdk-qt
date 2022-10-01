// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevirtualinterfaceattributesresponse.h"
#include "updatevirtualinterfaceattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateVirtualInterfaceAttributesResponse
 * \brief The UpdateVirtualInterfaceAttributesResponse class provides an interace for DirectConnect UpdateVirtualInterfaceAttributes responses.
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
 * \sa DirectConnectClient::updateVirtualInterfaceAttributes
 */

/*!
 * Constructs a UpdateVirtualInterfaceAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVirtualInterfaceAttributesResponse::UpdateVirtualInterfaceAttributesResponse(
        const UpdateVirtualInterfaceAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new UpdateVirtualInterfaceAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateVirtualInterfaceAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVirtualInterfaceAttributesRequest * UpdateVirtualInterfaceAttributesResponse::request() const
{
    Q_D(const UpdateVirtualInterfaceAttributesResponse);
    return static_cast<const UpdateVirtualInterfaceAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect UpdateVirtualInterfaceAttributes \a response.
 */
void UpdateVirtualInterfaceAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVirtualInterfaceAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::UpdateVirtualInterfaceAttributesResponsePrivate
 * \brief The UpdateVirtualInterfaceAttributesResponsePrivate class provides private implementation for UpdateVirtualInterfaceAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateVirtualInterfaceAttributesResponsePrivate object with public implementation \a q.
 */
UpdateVirtualInterfaceAttributesResponsePrivate::UpdateVirtualInterfaceAttributesResponsePrivate(
    UpdateVirtualInterfaceAttributesResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect UpdateVirtualInterfaceAttributes response element from \a xml.
 */
void UpdateVirtualInterfaceAttributesResponsePrivate::parseUpdateVirtualInterfaceAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVirtualInterfaceAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
