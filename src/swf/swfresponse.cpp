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

#include "swfresponse.h"
#include "swfresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::SWFResponse
 * \brief The SWFResponse class provides an interface for SWF responses.
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a SWFResponse object with parent \a parent.
 */
SWFResponse::SWFResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SWFResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SWFResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SWFResponsePrivate.
 */
SWFResponse::SWFResponse(SWFResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SWFResponse::parseFailure(QIODevice &response)
{
    Q_D(SWFResponse);
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
 * \class QtAws::SWF::SWFResponsePrivate
 * \brief The SWFResponsePrivate class provides private implementation for SWFResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a SWFResponsePrivate object with public implementation \a q.
 */
SWFResponsePrivate::SWFResponsePrivate(
    SWFResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SWF
} // namespace QtAws
