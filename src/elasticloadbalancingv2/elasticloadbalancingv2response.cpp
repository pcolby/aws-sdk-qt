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

#include "elasticloadbalancingv2response.h"
#include "elasticloadbalancingv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2Response
 * \brief The ElasticLoadBalancingv2Response class provides an interface for ElasticLoadBalancingv2 responses.
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ElasticLoadBalancingv2Response object with parent \a parent.
 */
ElasticLoadBalancingv2Response::ElasticLoadBalancingv2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticLoadBalancingv2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticLoadBalancingv2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingv2ResponsePrivate.
 */
ElasticLoadBalancingv2Response::ElasticLoadBalancingv2Response(ElasticLoadBalancingv2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticLoadBalancingv2Response::parseFailure(QIODevice &response)
{
    //Q_D(ElasticLoadBalancingv2Response);
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
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ResponsePrivate
 * \brief The ElasticLoadBalancingv2ResponsePrivate class provides private implementation for ElasticLoadBalancingv2Response.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ElasticLoadBalancingv2ResponsePrivate object with public implementation \a q.
 */
ElasticLoadBalancingv2ResponsePrivate::ElasticLoadBalancingv2ResponsePrivate(
    ElasticLoadBalancingv2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
