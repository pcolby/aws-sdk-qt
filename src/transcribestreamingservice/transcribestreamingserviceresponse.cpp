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

#include "transcribestreamingserviceresponse.h"
#include "transcribestreamingserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeStreamingService {

/*!
 * \class QtAws::TranscribeStreamingService::TranscribeStreamingServiceResponse
 * \brief The TranscribeStreamingServiceResponse class provides an interface for TranscribeStreamingService responses.
 *
 * \inmodule QtAwsTranscribeStreamingService
 */

/*!
 * Constructs a TranscribeStreamingServiceResponse object with parent \a parent.
 */
TranscribeStreamingServiceResponse::TranscribeStreamingServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new TranscribeStreamingServiceResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a TranscribeStreamingServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeStreamingServiceResponsePrivate.
 */
TranscribeStreamingServiceResponse::TranscribeStreamingServiceResponse(TranscribeStreamingServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void TranscribeStreamingServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(TranscribeStreamingServiceResponse);
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
 * \class QtAws::TranscribeStreamingService::TranscribeStreamingServiceResponsePrivate
 * \brief The TranscribeStreamingServiceResponsePrivate class provides private implementation for TranscribeStreamingServiceResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreamingService
 */

/*!
 * Constructs a TranscribeStreamingServiceResponsePrivate object with public implementation \a q.
 */
TranscribeStreamingServiceResponsePrivate::TranscribeStreamingServiceResponsePrivate(
    TranscribeStreamingServiceResponse * const q) : q_ptr(q)
{

}

} // namespace TranscribeStreamingService
} // namespace QtAws
