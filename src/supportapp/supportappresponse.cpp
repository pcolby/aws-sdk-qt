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

#include "supportappresponse.h"
#include "supportappresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::SupportAppResponse
 * \brief The SupportAppResponse class provides an interface for SupportApp responses.
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a SupportAppResponse object with parent \a parent.
 */
SupportAppResponse::SupportAppResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SupportAppResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SupportAppResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportAppResponsePrivate.
 */
SupportAppResponse::SupportAppResponse(SupportAppResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SupportAppResponse::parseFailure(QIODevice &response)
{
    //Q_D(SupportAppResponse);
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
 * \class QtAws::SupportApp::SupportAppResponsePrivate
 * \brief The SupportAppResponsePrivate class provides private implementation for SupportAppResponse.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a SupportAppResponsePrivate object with public implementation \a q.
 */
SupportAppResponsePrivate::SupportAppResponsePrivate(
    SupportAppResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SupportApp
} // namespace QtAws
