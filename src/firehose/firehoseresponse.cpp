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

#include "firehoseresponse.h"
#include "firehoseresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::FirehoseResponse
 *
 * \brief The FirehoseResponse class is the base class for all Firehose responses.
 *
 * \ingroup Firehose
 */

/*!
 * @brief  Constructs a new FirehoseResponse object.
 *
 * @param  parent   This object's parent.
 */
FirehoseResponse::FirehoseResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FirehoseResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new FirehoseResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FirehoseResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
FirehoseResponse::FirehoseResponse(FirehoseResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void FirehoseResponse::parseFailure(QIODevice &response)
{
    Q_D(FirehoseResponse);
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

/*!
 * @internal
 *
 * @class  FirehoseResponsePrivate
 *
 * @brief  Private implementation for FirehoseResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new FirehoseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public FirehoseResponse instance.
 */
FirehoseResponsePrivate::FirehoseResponsePrivate(
    FirehoseResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Firehose
} // namespace QtAws
