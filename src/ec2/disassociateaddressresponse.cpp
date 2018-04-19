/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociateaddressresponse.h"
#include "disassociateaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisassociateAddressResponse
 * \brief The DisassociateAddressResponse class provides an interace for EC2 DisassociateAddress responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::disassociateAddress
 */

/*!
 * Constructs a DisassociateAddressResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateAddressResponse::DisassociateAddressResponse(
        const DisassociateAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisassociateAddressResponsePrivate(this), parent)
{
    setRequest(new DisassociateAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateAddressRequest * DisassociateAddressResponse::request() const
{
    Q_D(const DisassociateAddressResponse);
    return static_cast<const DisassociateAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DisassociateAddress \a response.
 */
void DisassociateAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DisassociateAddressResponsePrivate
 * \brief The DisassociateAddressResponsePrivate class provides private implementation for DisassociateAddressResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DisassociateAddressResponsePrivate object with public implementation \a q.
 */
DisassociateAddressResponsePrivate::DisassociateAddressResponsePrivate(
    DisassociateAddressResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DisassociateAddress response element from \a xml.
 */
void DisassociateAddressResponsePrivate::parseDisassociateAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAddressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
