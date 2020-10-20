/*
    Copyright 2013-2020 Paul Colby

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

#include "amplifyresponse.h"
#include "amplifyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::AmplifyResponse
 * \brief The AmplifyResponse class provides an interface for Amplify responses.
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a AmplifyResponse object with parent \a parent.
 */
AmplifyResponse::AmplifyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AmplifyResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AmplifyResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmplifyResponsePrivate.
 */
AmplifyResponse::AmplifyResponse(AmplifyResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AmplifyResponse::parseFailure(QIODevice &response)
{
    //Q_D(AmplifyResponse);
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
 * \class QtAws::Amplify::AmplifyResponsePrivate
 * \brief The AmplifyResponsePrivate class provides private implementation for AmplifyResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a AmplifyResponsePrivate object with public implementation \a q.
 */
AmplifyResponsePrivate::AmplifyResponsePrivate(
    AmplifyResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Amplify
} // namespace QtAws
