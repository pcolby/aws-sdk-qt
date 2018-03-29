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

#include "deleteverifiedemailaddressresponse.h"
#include "deleteverifiedemailaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteVerifiedEmailAddressResponse
 *
 * @brief  Handles SES DeleteVerifiedEmailAddress responses.
 *
 * @see    SESClient::deleteVerifiedEmailAddress
 */

/**
 * @brief  Constructs a new DeleteVerifiedEmailAddressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVerifiedEmailAddressResponse::DeleteVerifiedEmailAddressResponse(
        const DeleteVerifiedEmailAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteVerifiedEmailAddressResponsePrivate(this), parent)
{
    setRequest(new DeleteVerifiedEmailAddressRequest(request));
    setReply(reply);
}

const DeleteVerifiedEmailAddressRequest * DeleteVerifiedEmailAddressResponse::request() const
{
    Q_D(const DeleteVerifiedEmailAddressResponse);
    return static_cast<const DeleteVerifiedEmailAddressRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteVerifiedEmailAddress response.
 *
 * @param  response  Response to parse.
 */
void DeleteVerifiedEmailAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVerifiedEmailAddressResponsePrivate
 *
 * @brief  Private implementation for DeleteVerifiedEmailAddressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVerifiedEmailAddressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVerifiedEmailAddressResponse instance.
 */
DeleteVerifiedEmailAddressResponsePrivate::DeleteVerifiedEmailAddressResponsePrivate(
    DeleteVerifiedEmailAddressQueueResponse * const q) : DeleteVerifiedEmailAddressPrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteVerifiedEmailAddressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVerifiedEmailAddressResponsePrivate::DeleteVerifiedEmailAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVerifiedEmailAddressResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
