// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakera2iruntimeresponse.h"
#include "sagemakera2iruntimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::SageMakerA2IRuntimeResponse
 * \brief The SageMakerA2IRuntimeResponse class provides an interface for SageMakerA2IRuntime responses.
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a SageMakerA2IRuntimeResponse object with parent \a parent.
 */
SageMakerA2IRuntimeResponse::SageMakerA2IRuntimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerA2IRuntimeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SageMakerA2IRuntimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerA2IRuntimeResponsePrivate.
 */
SageMakerA2IRuntimeResponse::SageMakerA2IRuntimeResponse(SageMakerA2IRuntimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SageMakerA2IRuntimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(SageMakerA2IRuntimeResponse);
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
 * \class QtAws::SageMakerA2IRuntime::SageMakerA2IRuntimeResponsePrivate
 * \brief The SageMakerA2IRuntimeResponsePrivate class provides private implementation for SageMakerA2IRuntimeResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a SageMakerA2IRuntimeResponsePrivate object with public implementation \a q.
 */
SageMakerA2IRuntimeResponsePrivate::SageMakerA2IRuntimeResponsePrivate(
    SageMakerA2IRuntimeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SageMakerA2IRuntime
} // namespace QtAws
