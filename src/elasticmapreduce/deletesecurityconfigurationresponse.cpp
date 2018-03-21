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

#include "deletesecurityconfigurationresponse.h"
#include "deletesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  DeleteSecurityConfigurationResponse
 *
 * @brief  Handles EMR DeleteSecurityConfiguration responses.
 *
 * @see    EMRClient::deleteSecurityConfiguration
 */

/**
 * @brief  Constructs a new DeleteSecurityConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSecurityConfigurationResponse::DeleteSecurityConfigurationResponse(
        const DeleteSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new DeleteSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteSecurityConfigurationRequest(request));
    setReply(reply);
}

const DeleteSecurityConfigurationRequest * DeleteSecurityConfigurationResponse::request() const
{
    Q_D(const DeleteSecurityConfigurationResponse);
    return static_cast<const DeleteSecurityConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a EMR DeleteSecurityConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSecurityConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteSecurityConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecurityConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSecurityConfigurationResponse instance.
 */
DeleteSecurityConfigurationResponsePrivate::DeleteSecurityConfigurationResponsePrivate(
    DeleteSecurityConfigurationQueueResponse * const q) : DeleteSecurityConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an EMR DeleteSecurityConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSecurityConfigurationResponsePrivate::DeleteSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecurityConfigurationResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
