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

#include "amplifyuibuilderresponse.h"
#include "amplifyuibuilderresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::AmplifyUIBuilderResponse
 * \brief The AmplifyUIBuilderResponse class provides an interface for AmplifyUIBuilder responses.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a AmplifyUIBuilderResponse object with parent \a parent.
 */
AmplifyUIBuilderResponse::AmplifyUIBuilderResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AmplifyUIBuilderResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AmplifyUIBuilderResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmplifyUIBuilderResponsePrivate.
 */
AmplifyUIBuilderResponse::AmplifyUIBuilderResponse(AmplifyUIBuilderResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AmplifyUIBuilderResponse::parseFailure(QIODevice &response)
{
    //Q_D(AmplifyUIBuilderResponse);
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
 * \class QtAws::AmplifyUIBuilder::AmplifyUIBuilderResponsePrivate
 * \brief The AmplifyUIBuilderResponsePrivate class provides private implementation for AmplifyUIBuilderResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a AmplifyUIBuilderResponsePrivate object with public implementation \a q.
 */
AmplifyUIBuilderResponsePrivate::AmplifyUIBuilderResponsePrivate(
    AmplifyUIBuilderResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
