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

#include "cloudwatchresponse.h"
#include "cloudwatchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  CloudWatchResponse
 *
 * @brief  Handles CloudWatch CloudWatch responses.
 *
 * @see    CloudWatchClient::cloudWatch
 */

/**
 * @brief  Constructs a new CloudWatchResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudWatchResponse::CloudWatchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void CloudWatchResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  CloudWatchResponsePrivate
 *
 * @brief  Private implementation for CloudWatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchResponse instance.
 */
CloudWatchResponsePrivate::CloudWatchResponsePrivate(
    CloudWatchQueueResponse * const q) : CloudWatchPrivate(q)
{

}

} // namespace CloudWatch
} // namespace QtAws
