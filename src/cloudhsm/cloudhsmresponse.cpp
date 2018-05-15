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

#include "cloudhsmresponse.h"
#include "cloudhsmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::CloudHSMResponse
 * \brief The CloudHSMResponse class provides an interface for CloudHSM responses.
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a CloudHSMResponse object with parent \a parent.
 */
CloudHSMResponse::CloudHSMResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudHSMResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudHSMResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHSMResponsePrivate.
 */
CloudHSMResponse::CloudHSMResponse(CloudHSMResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudHSMResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudHSMResponse);
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
 * \class QtAws::CloudHSM::CloudHSMResponsePrivate
 * \brief The CloudHSMResponsePrivate class provides private implementation for CloudHSMResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a CloudHSMResponsePrivate object with public implementation \a q.
 */
CloudHSMResponsePrivate::CloudHSMResponsePrivate(
    CloudHSMResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudHSM
} // namespace QtAws
