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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new SageMakerFeatureStoreRuntimeResponsePrivate(this))
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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
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
    SageMakerFeatureStoreRuntimeResponse * const q) : q_ptr(q)
{

}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
