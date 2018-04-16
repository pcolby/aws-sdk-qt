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

#include "healthresponse.h"
#include "healthresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::HealthResponse
 *
 * \brief The HealthResponse class is the base class for all Health responses.
 *
 * \ingroup Health
 */

/*!
 * @brief  Constructs a new HealthResponse object.
 *
 * @param  parent   This object's parent.
 */
HealthResponse::HealthResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HealthResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new HealthResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
HealthResponse::HealthResponse(HealthResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void HealthResponse::parseFailure(QIODevice &response)
{
    Q_D(HealthResponse);
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
 * @class  HealthResponsePrivate
 *
 * @brief  Private implementation for HealthResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new HealthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public HealthResponse instance.
 */
HealthResponsePrivate::HealthResponsePrivate(
    HealthResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Health
} // namespace QtAws
