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

#include "computeoptimizerresponse.h"
#include "computeoptimizerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ComputeOptimizerResponse
 * \brief The ComputeOptimizerResponse class provides an interface for ComputeOptimizer responses.
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ComputeOptimizerResponse object with parent \a parent.
 */
ComputeOptimizerResponse::ComputeOptimizerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new ComputeOptimizerResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a ComputeOptimizerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComputeOptimizerResponsePrivate.
 */
ComputeOptimizerResponse::ComputeOptimizerResponse(ComputeOptimizerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void ComputeOptimizerResponse::parseFailure(QIODevice &response)
{
    //Q_D(ComputeOptimizerResponse);
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
 * \class QtAws::ComputeOptimizer::ComputeOptimizerResponsePrivate
 * \brief The ComputeOptimizerResponsePrivate class provides private implementation for ComputeOptimizerResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ComputeOptimizerResponsePrivate object with public implementation \a q.
 */
ComputeOptimizerResponsePrivate::ComputeOptimizerResponsePrivate(
    ComputeOptimizerResponse * const q) : q_ptr(q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
