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

#include "ebsresponse.h"
#include "ebsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EBS {

/*!
 * \class QtAws::EBS::EbsResponse
 * \brief The EbsResponse class provides an interface for EBS responses.
 *
 * \inmodule QtAwsEBS
 */

/*!
 * Constructs a EbsResponse object with parent \a parent.
 */
EbsResponse::EbsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EbsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EbsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EbsResponsePrivate.
 */
EbsResponse::EbsResponse(EbsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EbsResponse::parseFailure(QIODevice &response)
{
    //Q_D(EbsResponse);
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
 * \class QtAws::EBS::EbsResponsePrivate
 * \brief The EbsResponsePrivate class provides private implementation for EbsResponse.
 * \internal
 *
 * \inmodule QtAwsEBS
 */

/*!
 * Constructs a EbsResponsePrivate object with public implementation \a q.
 */
EbsResponsePrivate::EbsResponsePrivate(
    EbsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EBS
} // namespace QtAws
