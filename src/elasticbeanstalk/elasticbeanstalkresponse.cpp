/*
    Copyright 2013-2018 Paul Colby

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

#include "elasticbeanstalkresponse.h"
#include "elasticbeanstalkresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ElasticBeanstalkResponse
 * \brief The ElasticBeanstalkResponse class provides an interface for ElasticBeanstalk responses.
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ElasticBeanstalkResponse object with parent \a parent.
 */
ElasticBeanstalkResponse::ElasticBeanstalkResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticBeanstalkResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticBeanstalkResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticBeanstalkResponsePrivate.
 */
ElasticBeanstalkResponse::ElasticBeanstalkResponse(ElasticBeanstalkResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticBeanstalkResponse::parseFailure(QIODevice &response)
{
    Q_D(ElasticBeanstalkResponse);
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
 * \class QtAws::ElasticBeanstalk::ElasticBeanstalkResponsePrivate
 * \brief The ElasticBeanstalkResponsePrivate class provides private implementation for ElasticBeanstalkResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ElasticBeanstalkResponsePrivate object with public implementation \a q.
 */
ElasticBeanstalkResponsePrivate::ElasticBeanstalkResponsePrivate(
    ElasticBeanstalkResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
