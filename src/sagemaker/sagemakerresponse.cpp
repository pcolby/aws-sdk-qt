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

#include "sagemakerresponse.h"
#include "sagemakerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SageMakerResponse
 * \brief The SageMakerResponse class provides an interface for SageMaker responses.
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerResponse object with parent \a parent.
 */
SageMakerResponse::SageMakerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SageMakerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerResponsePrivate.
 */
SageMakerResponse::SageMakerResponse(SageMakerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SageMakerResponse::parseFailure(QIODevice &response)
{
    Q_D(SageMakerResponse);
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
 * \class QtAws::SageMaker::SageMakerResponsePrivate
 * \brief The SageMakerResponsePrivate class provides private implementation for SageMakerResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerResponsePrivate object with public implementation \a q.
 */
SageMakerResponsePrivate::SageMakerResponsePrivate(
    SageMakerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SageMaker
} // namespace QtAws
