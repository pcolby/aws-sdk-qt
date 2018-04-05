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

#include "deleteconfigurationaggregatorresponse.h"
#include "deleteconfigurationaggregatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteConfigurationAggregatorResponse
 *
 * @brief  Handles ConfigService DeleteConfigurationAggregator responses.
 *
 * @see    ConfigServiceClient::deleteConfigurationAggregator
 */

/**
 * @brief  Constructs a new DeleteConfigurationAggregatorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationAggregatorResponse::DeleteConfigurationAggregatorResponse(
        const DeleteConfigurationAggregatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteConfigurationAggregatorResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationAggregatorRequest(request));
    setReply(reply);
}

const DeleteConfigurationAggregatorRequest * DeleteConfigurationAggregatorResponse::request() const
{
    Q_D(const DeleteConfigurationAggregatorResponse);
    return static_cast<const DeleteConfigurationAggregatorRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteConfigurationAggregator response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationAggregatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConfigurationAggregatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigurationAggregatorResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigurationAggregatorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationAggregatorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationAggregatorResponse instance.
 */
DeleteConfigurationAggregatorResponsePrivate::DeleteConfigurationAggregatorResponsePrivate(
    DeleteConfigurationAggregatorResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteConfigurationAggregatorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationAggregatorResponsePrivate::parseDeleteConfigurationAggregatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationAggregatorResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
