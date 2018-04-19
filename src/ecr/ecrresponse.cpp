/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ecrresponse.h"
#include "ecrresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::ECRResponse
 * \brief The ECRResponse class provides an interface for ECR responses.
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a ECRResponse object with parent \a parent.
 */
ECRResponse::ECRResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ECRResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ECRResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ECRResponsePrivate.
 */
ECRResponse::ECRResponse(ECRResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ECRResponse::parseFailure(QIODevice &response)
{
    Q_D(ECRResponse);
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
 * \class QtAws::ECR::ECRResponsePrivate
 * \brief The ECRResponsePrivate class provides private implementation for ECRResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a ECRResponsePrivate object with public implementation \a q.
 */
ECRResponsePrivate::ECRResponsePrivate(
    ECRResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ECR
} // namespace QtAws
