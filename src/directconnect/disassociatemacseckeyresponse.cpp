// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatemacseckeyresponse.h"
#include "disassociatemacseckeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DisassociateMacSecKeyResponse
 * \brief The DisassociateMacSecKeyResponse class provides an interace for DirectConnect DisassociateMacSecKey responses.
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
 * \sa DirectConnectClient::disassociateMacSecKey
 */

/*!
 * Constructs a DisassociateMacSecKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMacSecKeyResponse::DisassociateMacSecKeyResponse(
        const DisassociateMacSecKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DisassociateMacSecKeyResponsePrivate(this), parent)
{
    setRequest(new DisassociateMacSecKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMacSecKeyRequest * DisassociateMacSecKeyResponse::request() const
{
    Q_D(const DisassociateMacSecKeyResponse);
    return static_cast<const DisassociateMacSecKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DisassociateMacSecKey \a response.
 */
void DisassociateMacSecKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMacSecKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DisassociateMacSecKeyResponsePrivate
 * \brief The DisassociateMacSecKeyResponsePrivate class provides private implementation for DisassociateMacSecKeyResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DisassociateMacSecKeyResponsePrivate object with public implementation \a q.
 */
DisassociateMacSecKeyResponsePrivate::DisassociateMacSecKeyResponsePrivate(
    DisassociateMacSecKeyResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DisassociateMacSecKey response element from \a xml.
 */
void DisassociateMacSecKeyResponsePrivate::parseDisassociateMacSecKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMacSecKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
