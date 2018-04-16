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

#include "ec2response.h"
#include "ec2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::EC2Response
 *
 * \brief The EC2Response class is the base class for all EC2 responses.
 *
 * \ingroup EC2
 */

/*!
 * @brief  Constructs a new EC2Response object.
 *
 * @param  parent   This object's parent.
 */
EC2Response::EC2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EC2ResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new EC2Response object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EC2ResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
EC2Response::EC2Response(EC2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void EC2Response::parseFailure(QIODevice &response)
{
    Q_D(EC2Response);
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
 * @class  EC2ResponsePrivate
 *
 * @brief  Private implementation for EC2Response.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EC2ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EC2Response instance.
 */
EC2ResponsePrivate::EC2ResponsePrivate(
    EC2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EC2
} // namespace QtAws
