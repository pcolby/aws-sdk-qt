// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
