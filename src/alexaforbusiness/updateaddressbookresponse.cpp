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

#include "updateaddressbookresponse.h"
#include "updateaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  UpdateAddressBookResponse
 *
 * @brief  Handles AlexaForBusiness UpdateAddressBook responses.
 *
 * @see    AlexaForBusinessClient::updateAddressBook
 */

/**
 * @brief  Constructs a new UpdateAddressBookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAddressBookResponse::UpdateAddressBookResponse(
        const UpdateAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateAddressBookResponsePrivate(this), parent)
{
    setRequest(new UpdateAddressBookRequest(request));
    setReply(reply);
}

const UpdateAddressBookRequest * UpdateAddressBookResponse::request() const
{
    Q_D(const UpdateAddressBookResponse);
    return static_cast<const UpdateAddressBookRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness UpdateAddressBook response.
 *
 * @param  response  Response to parse.
 */
void UpdateAddressBookResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAddressBookResponsePrivate
 *
 * @brief  Private implementation for UpdateAddressBookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAddressBookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAddressBookResponse instance.
 */
UpdateAddressBookResponsePrivate::UpdateAddressBookResponsePrivate(
    UpdateAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness UpdateAddressBookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAddressBookResponsePrivate::parseUpdateAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAddressBookResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
