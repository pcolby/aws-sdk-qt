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

#include "ssmresponse.h"
#include "ssmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::SSMResponse
 * \brief The SSMResponse class provides an interface for SSM responses.
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a SSMResponse object with parent \a parent.
 */
SSMResponse::SSMResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SSMResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SSMResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMResponsePrivate.
 */
SSMResponse::SSMResponse(SSMResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SSMResponse::parseFailure(QIODevice &response)
{
    Q_D(SSMResponse);
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
 * \class QtAws::SSM::SSMResponsePrivate
 * \brief The SSMResponsePrivate class provides private implementation for SSMResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a SSMResponsePrivate object with public implementation \a q.
 */
SSMResponsePrivate::SSMResponsePrivate(
    SSMResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SSM
} // namespace QtAws
