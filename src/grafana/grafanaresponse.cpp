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

#include "grafanaresponse.h"
#include "grafanaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::GrafanaResponse
 * \brief The GrafanaResponse class provides an interface for Grafana responses.
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a GrafanaResponse object with parent \a parent.
 */
GrafanaResponse::GrafanaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GrafanaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GrafanaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GrafanaResponsePrivate.
 */
GrafanaResponse::GrafanaResponse(GrafanaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GrafanaResponse::parseFailure(QIODevice &response)
{
    //Q_D(GrafanaResponse);
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
 * \class QtAws::Grafana::GrafanaResponsePrivate
 * \brief The GrafanaResponsePrivate class provides private implementation for GrafanaResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a GrafanaResponsePrivate object with public implementation \a q.
 */
GrafanaResponsePrivate::GrafanaResponsePrivate(
    GrafanaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Grafana
} // namespace QtAws
