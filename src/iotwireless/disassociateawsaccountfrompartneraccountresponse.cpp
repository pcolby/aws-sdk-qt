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

#include "disassociateawsaccountfrompartneraccountresponse.h"
#include "disassociateawsaccountfrompartneraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateAwsAccountFromPartnerAccountResponse
 * \brief The DisassociateAwsAccountFromPartnerAccountResponse class provides an interace for IoTWireless DisassociateAwsAccountFromPartnerAccount responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::disassociateAwsAccountFromPartnerAccount
 */

/*!
 * Constructs a DisassociateAwsAccountFromPartnerAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateAwsAccountFromPartnerAccountResponse::DisassociateAwsAccountFromPartnerAccountResponse(
        const DisassociateAwsAccountFromPartnerAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateAwsAccountFromPartnerAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateAwsAccountFromPartnerAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateAwsAccountFromPartnerAccountRequest * DisassociateAwsAccountFromPartnerAccountResponse::request() const
{
    return static_cast<const DisassociateAwsAccountFromPartnerAccountRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateAwsAccountFromPartnerAccount \a response.
 */
void DisassociateAwsAccountFromPartnerAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateAwsAccountFromPartnerAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateAwsAccountFromPartnerAccountResponsePrivate
 * \brief The DisassociateAwsAccountFromPartnerAccountResponsePrivate class provides private implementation for DisassociateAwsAccountFromPartnerAccountResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateAwsAccountFromPartnerAccountResponsePrivate object with public implementation \a q.
 */
DisassociateAwsAccountFromPartnerAccountResponsePrivate::DisassociateAwsAccountFromPartnerAccountResponsePrivate(
    DisassociateAwsAccountFromPartnerAccountResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateAwsAccountFromPartnerAccount response element from \a xml.
 */
void DisassociateAwsAccountFromPartnerAccountResponsePrivate::parseDisassociateAwsAccountFromPartnerAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAwsAccountFromPartnerAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
