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

#include "elasticloadbalancingresponse.h"
#include "elasticloadbalancingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::ElasticLoadBalancingResponse
 * \brief The ElasticLoadBalancingResponse class provides an interface for ElasticLoadBalancing responses.
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a ElasticLoadBalancingResponse object with parent \a parent.
 */
ElasticLoadBalancingResponse::ElasticLoadBalancingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticLoadBalancingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticLoadBalancingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingResponsePrivate.
 */
ElasticLoadBalancingResponse::ElasticLoadBalancingResponse(ElasticLoadBalancingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticLoadBalancingResponse::parseFailure(QIODevice &response)
{
    Q_D(ElasticLoadBalancingResponse);
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
 * \class QtAws::ElasticLoadBalancing::ElasticLoadBalancingResponsePrivate
 * \brief The ElasticLoadBalancingResponsePrivate class provides private implementation for ElasticLoadBalancingResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a ElasticLoadBalancingResponsePrivate object with public implementation \a q.
 */
ElasticLoadBalancingResponsePrivate::ElasticLoadBalancingResponsePrivate(
    ElasticLoadBalancingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
