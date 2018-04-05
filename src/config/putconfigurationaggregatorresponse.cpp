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

#include "putconfigurationaggregatorresponse.h"
#include "putconfigurationaggregatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  PutConfigurationAggregatorResponse
 *
 * @brief  Handles ConfigService PutConfigurationAggregator responses.
 *
 * @see    ConfigServiceClient::putConfigurationAggregator
 */

/**
 * @brief  Constructs a new PutConfigurationAggregatorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutConfigurationAggregatorResponse::PutConfigurationAggregatorResponse(
        const PutConfigurationAggregatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutConfigurationAggregatorResponsePrivate(this), parent)
{
    setRequest(new PutConfigurationAggregatorRequest(request));
    setReply(reply);
}

const PutConfigurationAggregatorRequest * PutConfigurationAggregatorResponse::request() const
{
    Q_D(const PutConfigurationAggregatorResponse);
    return static_cast<const PutConfigurationAggregatorRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService PutConfigurationAggregator response.
 *
 * @param  response  Response to parse.
 */
void PutConfigurationAggregatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutConfigurationAggregatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutConfigurationAggregatorResponsePrivate
 *
 * @brief  Private implementation for PutConfigurationAggregatorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigurationAggregatorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutConfigurationAggregatorResponse instance.
 */
PutConfigurationAggregatorResponsePrivate::PutConfigurationAggregatorResponsePrivate(
    PutConfigurationAggregatorResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService PutConfigurationAggregatorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutConfigurationAggregatorResponsePrivate::parsePutConfigurationAggregatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigurationAggregatorResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
