// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkmessagingresponse.h"
#include "chimesdkmessagingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingResponse
 * \brief The ChimeSdkMessagingResponse class provides an interface for ChimeSdkMessaging responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChimeSdkMessagingResponse object with parent \a parent.
 */
ChimeSdkMessagingResponse::ChimeSdkMessagingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ChimeSdkMessagingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ChimeSdkMessagingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMessagingResponsePrivate.
 */
ChimeSdkMessagingResponse::ChimeSdkMessagingResponse(ChimeSdkMessagingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ChimeSdkMessagingResponse::parseFailure(QIODevice &response)
{
    //Q_D(ChimeSdkMessagingResponse);
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
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingResponsePrivate
 * \brief The ChimeSdkMessagingResponsePrivate class provides private implementation for ChimeSdkMessagingResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChimeSdkMessagingResponsePrivate object with public implementation \a q.
 */
ChimeSdkMessagingResponsePrivate::ChimeSdkMessagingResponsePrivate(
    ChimeSdkMessagingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
