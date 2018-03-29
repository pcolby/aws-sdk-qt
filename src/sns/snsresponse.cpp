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

#include "snsresponse.h"
#include "snsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  SNSResponse
 *
 * @brief  Handles SNS SNS responses.
 *
 * @see    SNSClient::sNS
 */

/**
 * @brief  Constructs a new SNSResponse object.
 *
 * @param  parent   This object's parent.
 */
SNSResponse::SNSResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SNSResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void SNSResponse::parseFailure(QIODevice &response)
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
 * @class  SNSResponsePrivate
 *
 * @brief  Private implementation for SNSResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SNSResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SNSResponse instance.
 */
SNSResponsePrivate::SNSResponsePrivate(
    SNSQueueResponse * const q) : SNSPrivate(q)
{

}

} // namespace SNS
} // namespace QtAws
