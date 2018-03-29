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

#include "deletehsmconfigurationresponse.h"
#include "deletehsmconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteHsmConfigurationResponse
 *
 * @brief  Handles Redshift DeleteHsmConfiguration responses.
 *
 * @see    RedshiftClient::deleteHsmConfiguration
 */

/**
 * @brief  Constructs a new DeleteHsmConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHsmConfigurationResponse::DeleteHsmConfigurationResponse(
        const DeleteHsmConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteHsmConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteHsmConfigurationRequest(request));
    setReply(reply);
}

const DeleteHsmConfigurationRequest * DeleteHsmConfigurationResponse::request() const
{
    Q_D(const DeleteHsmConfigurationResponse);
    return static_cast<const DeleteHsmConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteHsmConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteHsmConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteHsmConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteHsmConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHsmConfigurationResponse instance.
 */
DeleteHsmConfigurationResponsePrivate::DeleteHsmConfigurationResponsePrivate(
    DeleteHsmConfigurationQueueResponse * const q) : DeleteHsmConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteHsmConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHsmConfigurationResponsePrivate::DeleteHsmConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHsmConfigurationResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
