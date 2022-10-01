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
