// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkmeetingsresponse.h"
#include "chimesdkmeetingsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::ChimeSdkMeetingsResponse
 * \brief The ChimeSdkMeetingsResponse class provides an interface for ChimeSdkMeetings responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a ChimeSdkMeetingsResponse object with parent \a parent.
 */
ChimeSdkMeetingsResponse::ChimeSdkMeetingsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ChimeSdkMeetingsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ChimeSdkMeetingsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMeetingsResponsePrivate.
 */
ChimeSdkMeetingsResponse::ChimeSdkMeetingsResponse(ChimeSdkMeetingsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ChimeSdkMeetingsResponse::parseFailure(QIODevice &response)
{
    //Q_D(ChimeSdkMeetingsResponse);
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
 * \class QtAws::ChimeSdkMeetings::ChimeSdkMeetingsResponsePrivate
 * \brief The ChimeSdkMeetingsResponsePrivate class provides private implementation for ChimeSdkMeetingsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a ChimeSdkMeetingsResponsePrivate object with public implementation \a q.
 */
ChimeSdkMeetingsResponsePrivate::ChimeSdkMeetingsResponsePrivate(
    ChimeSdkMeetingsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
