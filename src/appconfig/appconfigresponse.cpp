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

#include "appconfigresponse.h"
#include "appconfigresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::AppConfigResponse
 * \brief The AppConfigResponse class provides an interface for AppConfig responses.
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a AppConfigResponse object with parent \a parent.
 */
AppConfigResponse::AppConfigResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new AppConfigResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a AppConfigResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppConfigResponsePrivate.
 */
AppConfigResponse::AppConfigResponse(AppConfigResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void AppConfigResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppConfigResponse);
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
 * \class QtAws::AppConfig::AppConfigResponsePrivate
 * \brief The AppConfigResponsePrivate class provides private implementation for AppConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a AppConfigResponsePrivate object with public implementation \a q.
 */
AppConfigResponsePrivate::AppConfigResponsePrivate(
    AppConfigResponse * const q) : q_ptr(q)
{

}

} // namespace AppConfig
} // namespace QtAws
