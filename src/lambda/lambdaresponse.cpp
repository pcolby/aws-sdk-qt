/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "lambdaresponse.h"
#include "lambdaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::LambdaResponse
 * \brief The LambdaResponse class provides an interface for Lambda responses.
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a LambdaResponse object with parent \a parent.
 */
LambdaResponse::LambdaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new LambdaResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a LambdaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LambdaResponsePrivate.
 */
LambdaResponse::LambdaResponse(LambdaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void LambdaResponse::parseFailure(QIODevice &response)
{
    //Q_D(LambdaResponse);
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
 * \class QtAws::Lambda::LambdaResponsePrivate
 * \brief The LambdaResponsePrivate class provides private implementation for LambdaResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a LambdaResponsePrivate object with public implementation \a q.
 */
LambdaResponsePrivate::LambdaResponsePrivate(
    LambdaResponse * const q) : q_ptr(q)
{

}

} // namespace Lambda
} // namespace QtAws
