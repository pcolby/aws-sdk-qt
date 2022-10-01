// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ElasticLoadBalancingResponse);
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
