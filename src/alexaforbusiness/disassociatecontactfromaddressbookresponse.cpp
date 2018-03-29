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

#include "disassociatecontactfromaddressbookresponse.h"
#include "disassociatecontactfromaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  DisassociateContactFromAddressBookResponse
 *
 * @brief  Handles AlexaForBusiness DisassociateContactFromAddressBook responses.
 *
 * @see    AlexaForBusinessClient::disassociateContactFromAddressBook
 */

/**
 * @brief  Constructs a new DisassociateContactFromAddressBookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateContactFromAddressBookResponse::DisassociateContactFromAddressBookResponse(
        const DisassociateContactFromAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateContactFromAddressBookResponsePrivate(this), parent)
{
    setRequest(new DisassociateContactFromAddressBookRequest(request));
    setReply(reply);
}

const DisassociateContactFromAddressBookRequest * DisassociateContactFromAddressBookResponse::request() const
{
    Q_D(const DisassociateContactFromAddressBookResponse);
    return static_cast<const DisassociateContactFromAddressBookRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness DisassociateContactFromAddressBook response.
 *
 * @param  response  Response to parse.
 */
void DisassociateContactFromAddressBookResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateContactFromAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateContactFromAddressBookResponsePrivate
 *
 * @brief  Private implementation for DisassociateContactFromAddressBookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateContactFromAddressBookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateContactFromAddressBookResponse instance.
 */
DisassociateContactFromAddressBookResponsePrivate::DisassociateContactFromAddressBookResponsePrivate(
    DisassociateContactFromAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness DisassociateContactFromAddressBookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateContactFromAddressBookResponsePrivate::parseDisassociateContactFromAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateContactFromAddressBookResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
