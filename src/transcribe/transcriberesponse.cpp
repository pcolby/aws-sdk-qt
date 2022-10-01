// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
