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

#include "cloudhsmresponse.h"
#include "cloudhsmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CloudHsmResponse
 * \brief The CloudHsmResponse class provides an interface for CloudHsm responses.
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CloudHsmResponse object with parent \a parent.
 */
CloudHsmResponse::CloudHsmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudHsmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudHsmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHsmResponsePrivate.
 */
CloudHsmResponse::CloudHsmResponse(CloudHsmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudHsmResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudHsmResponse);
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
 * \class QtAws::CloudHsm::CloudHsmResponsePrivate
 * \brief The CloudHsmResponsePrivate class provides private implementation for CloudHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CloudHsmResponsePrivate object with public implementation \a q.
 */
CloudHsmResponsePrivate::CloudHsmResponsePrivate(
    CloudHsmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudHsm
} // namespace QtAws
