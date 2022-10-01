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

#include "transcriberesponse.h"
#include "transcriberesponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::TranscribeResponse
 * \brief The TranscribeResponse class provides an interface for Transcribe responses.
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a TranscribeResponse object with parent \a parent.
 */
TranscribeResponse::TranscribeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TranscribeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TranscribeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeResponsePrivate.
 */
TranscribeResponse::TranscribeResponse(TranscribeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TranscribeResponse::parseFailure(QIODevice &response)
{
    //Q_D(TranscribeResponse);
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
 * \class QtAws::Transcribe::TranscribeResponsePrivate
 * \brief The TranscribeResponsePrivate class provides private implementation for TranscribeResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a TranscribeResponsePrivate object with public implementation \a q.
 */
TranscribeResponsePrivate::TranscribeResponsePrivate(
    TranscribeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Transcribe
} // namespace QtAws
