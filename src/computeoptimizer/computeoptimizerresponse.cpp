// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    : QtAws::Core::AwsAbstractResponse(new ComputeOptimizerResponsePrivate(this), parent)
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
    : QtAws::Core::AwsAbstractResponse(d, parent)
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
    ComputeOptimizerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
