// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakerruntimeresponse.h"
#include "sagemakerruntimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::SageMakerRuntimeResponse
 * \brief The SageMakerRuntimeResponse class provides an interface for SageMakerRuntime responses.
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a SageMakerRuntimeResponse object with parent \a parent.
 */
SageMakerRuntimeResponse::SageMakerRuntimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerRuntimeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SageMakerRuntimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerRuntimeResponsePrivate.
 */
SageMakerRuntimeResponse::SageMakerRuntimeResponse(SageMakerRuntimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SageMakerRuntimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(SageMakerRuntimeResponse);
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
 * \class QtAws::SageMakerRuntime::SageMakerRuntimeResponsePrivate
 * \brief The SageMakerRuntimeResponsePrivate class provides private implementation for SageMakerRuntimeResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a SageMakerRuntimeResponsePrivate object with public implementation \a q.
 */
SageMakerRuntimeResponsePrivate::SageMakerRuntimeResponsePrivate(
    SageMakerRuntimeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SageMakerRuntime
} // namespace QtAws
