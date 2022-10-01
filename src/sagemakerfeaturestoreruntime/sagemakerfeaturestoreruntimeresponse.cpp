// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakerfeaturestoreruntimeresponse.h"
#include "sagemakerfeaturestoreruntimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeResponse
 * \brief The SageMakerFeatureStoreRuntimeResponse class provides an interface for SageMakerFeatureStoreRuntime responses.
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a SageMakerFeatureStoreRuntimeResponse object with parent \a parent.
 */
SageMakerFeatureStoreRuntimeResponse::SageMakerFeatureStoreRuntimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerFeatureStoreRuntimeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SageMakerFeatureStoreRuntimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerFeatureStoreRuntimeResponsePrivate.
 */
SageMakerFeatureStoreRuntimeResponse::SageMakerFeatureStoreRuntimeResponse(SageMakerFeatureStoreRuntimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SageMakerFeatureStoreRuntimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(SageMakerFeatureStoreRuntimeResponse);
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
 * \class QtAws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeResponsePrivate
 * \brief The SageMakerFeatureStoreRuntimeResponsePrivate class provides private implementation for SageMakerFeatureStoreRuntimeResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a SageMakerFeatureStoreRuntimeResponsePrivate object with public implementation \a q.
 */
SageMakerFeatureStoreRuntimeResponsePrivate::SageMakerFeatureStoreRuntimeResponsePrivate(
    SageMakerFeatureStoreRuntimeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
