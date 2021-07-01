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

#include "prometheusserviceresponse.h"
#include "prometheusserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::PrometheusServiceResponse
 * \brief The PrometheusServiceResponse class provides an interface for PrometheusService responses.
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a PrometheusServiceResponse object with parent \a parent.
 */
PrometheusServiceResponse::PrometheusServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PrometheusServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PrometheusServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PrometheusServiceResponsePrivate.
 */
PrometheusServiceResponse::PrometheusServiceResponse(PrometheusServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PrometheusServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(PrometheusServiceResponse);
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
 * \class QtAws::PrometheusService::PrometheusServiceResponsePrivate
 * \brief The PrometheusServiceResponsePrivate class provides private implementation for PrometheusServiceResponse.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a PrometheusServiceResponsePrivate object with public implementation \a q.
 */
PrometheusServiceResponsePrivate::PrometheusServiceResponsePrivate(
    PrometheusServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PrometheusService
} // namespace QtAws
