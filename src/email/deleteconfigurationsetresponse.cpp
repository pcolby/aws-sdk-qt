/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteConfigurationSetResponse
 *
 * @brief  Handles SES DeleteConfigurationSet responses.
 *
 * @see    SESClient::deleteConfigurationSet
 */

/**
 * @brief  Constructs a new DeleteConfigurationSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationSetResponse::DeleteConfigurationSetResponse(
        const DeleteConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetRequest(request));
    setReply(reply);
}

const DeleteConfigurationSetRequest * DeleteConfigurationSetResponse::request() const
{
    Q_D(const DeleteConfigurationSetResponse);
    return static_cast<const DeleteConfigurationSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteConfigurationSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigurationSetResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigurationSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationSetResponse instance.
 */
DeleteConfigurationSetResponsePrivate::DeleteConfigurationSetResponsePrivate(
    DeleteConfigurationSetQueueResponse * const q) : DeleteConfigurationSetPrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteConfigurationSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationSetResponsePrivate::DeleteConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
