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

#include "transcribestreamingresponse.h"
#include "transcribestreamingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::TranscribeStreamingResponse
 * \brief The TranscribeStreamingResponse class provides an interface for TranscribeStreaming responses.
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a TranscribeStreamingResponse object with parent \a parent.
 */
TranscribeStreamingResponse::TranscribeStreamingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TranscribeStreamingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TranscribeStreamingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeStreamingResponsePrivate.
 */
TranscribeStreamingResponse::TranscribeStreamingResponse(TranscribeStreamingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TranscribeStreamingResponse::parseFailure(QIODevice &response)
{
    //Q_D(TranscribeStreamingResponse);
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
 * \class QtAws::TranscribeStreaming::TranscribeStreamingResponsePrivate
 * \brief The TranscribeStreamingResponsePrivate class provides private implementation for TranscribeStreamingResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a TranscribeStreamingResponsePrivate object with public implementation \a q.
 */
TranscribeStreamingResponsePrivate::TranscribeStreamingResponsePrivate(
    TranscribeStreamingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace TranscribeStreaming
} // namespace QtAws
