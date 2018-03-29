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

#include "createreceiptfilterresponse.h"
#include "createreceiptfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  CreateReceiptFilterResponse
 *
 * @brief  Handles SES CreateReceiptFilter responses.
 *
 * @see    SESClient::createReceiptFilter
 */

/**
 * @brief  Constructs a new CreateReceiptFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReceiptFilterResponse::CreateReceiptFilterResponse(
        const CreateReceiptFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateReceiptFilterResponsePrivate(this), parent)
{
    setRequest(new CreateReceiptFilterRequest(request));
    setReply(reply);
}

const CreateReceiptFilterRequest * CreateReceiptFilterResponse::request() const
{
    Q_D(const CreateReceiptFilterResponse);
    return static_cast<const CreateReceiptFilterRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateReceiptFilter response.
 *
 * @param  response  Response to parse.
 */
void CreateReceiptFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReceiptFilterResponsePrivate
 *
 * @brief  Private implementation for CreateReceiptFilterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReceiptFilterResponse instance.
 */
CreateReceiptFilterResponsePrivate::CreateReceiptFilterResponsePrivate(
    CreateReceiptFilterQueueResponse * const q) : CreateReceiptFilterPrivate(q)
{

}

/**
 * @brief  Parse an SES CreateReceiptFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReceiptFilterResponsePrivate::CreateReceiptFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReceiptFilterResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
