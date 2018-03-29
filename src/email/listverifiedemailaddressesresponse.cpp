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

#include "listverifiedemailaddressesresponse.h"
#include "listverifiedemailaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  ListVerifiedEmailAddressesResponse
 *
 * @brief  Handles SES ListVerifiedEmailAddresses responses.
 *
 * @see    SESClient::listVerifiedEmailAddresses
 */

/**
 * @brief  Constructs a new ListVerifiedEmailAddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVerifiedEmailAddressesResponse::ListVerifiedEmailAddressesResponse(
        const ListVerifiedEmailAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListVerifiedEmailAddressesResponsePrivate(this), parent)
{
    setRequest(new ListVerifiedEmailAddressesRequest(request));
    setReply(reply);
}

const ListVerifiedEmailAddressesRequest * ListVerifiedEmailAddressesResponse::request() const
{
    Q_D(const ListVerifiedEmailAddressesResponse);
    return static_cast<const ListVerifiedEmailAddressesRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListVerifiedEmailAddresses response.
 *
 * @param  response  Response to parse.
 */
void ListVerifiedEmailAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVerifiedEmailAddressesResponsePrivate
 *
 * @brief  Private implementation for ListVerifiedEmailAddressesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVerifiedEmailAddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVerifiedEmailAddressesResponse instance.
 */
ListVerifiedEmailAddressesResponsePrivate::ListVerifiedEmailAddressesResponsePrivate(
    ListVerifiedEmailAddressesQueueResponse * const q) : ListVerifiedEmailAddressesPrivate(q)
{

}

/**
 * @brief  Parse an SES ListVerifiedEmailAddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVerifiedEmailAddressesResponsePrivate::ListVerifiedEmailAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVerifiedEmailAddressesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
