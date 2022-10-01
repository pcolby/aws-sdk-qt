// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appstreamresponse.h"
#include "appstreamresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamResponse
 * \brief The AppStreamResponse class provides an interface for AppStream responses.
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamResponse object with parent \a parent.
 */
AppStreamResponse::AppStreamResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppStreamResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppStreamResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppStreamResponsePrivate.
 */
AppStreamResponse::AppStreamResponse(AppStreamResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppStreamResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppStreamResponse);
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
 * \class QtAws::AppStream::AppStreamResponsePrivate
 * \brief The AppStreamResponsePrivate class provides private implementation for AppStreamResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamResponsePrivate object with public implementation \a q.
 */
AppStreamResponsePrivate::AppStreamResponsePrivate(
    AppStreamResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppStream
} // namespace QtAws
