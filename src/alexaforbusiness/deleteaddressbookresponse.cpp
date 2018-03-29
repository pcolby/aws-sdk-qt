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

#include "deleteaddressbookresponse.h"
#include "deleteaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  DeleteAddressBookResponse
 *
 * @brief  Handles AlexaForBusiness DeleteAddressBook responses.
 *
 * @see    AlexaForBusinessClient::deleteAddressBook
 */

/**
 * @brief  Constructs a new DeleteAddressBookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAddressBookResponse::DeleteAddressBookResponse(
        const DeleteAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteAddressBookResponsePrivate(this), parent)
{
    setRequest(new DeleteAddressBookRequest(request));
    setReply(reply);
}

const DeleteAddressBookRequest * DeleteAddressBookResponse::request() const
{
    Q_D(const DeleteAddressBookResponse);
    return static_cast<const DeleteAddressBookRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness DeleteAddressBook response.
 *
 * @param  response  Response to parse.
 */
void DeleteAddressBookResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAddressBookResponsePrivate
 *
 * @brief  Private implementation for DeleteAddressBookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAddressBookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAddressBookResponse instance.
 */
DeleteAddressBookResponsePrivate::DeleteAddressBookResponsePrivate(
    DeleteAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness DeleteAddressBookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAddressBookResponsePrivate::parseDeleteAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAddressBookResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
