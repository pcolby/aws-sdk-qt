// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "timestreamwriteresponse.h"
#include "timestreamwriteresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::TimestreamWriteResponse
 * \brief The TimestreamWriteResponse class provides an interface for TimestreamWrite responses.
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a TimestreamWriteResponse object with parent \a parent.
 */
TimestreamWriteResponse::TimestreamWriteResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TimestreamWriteResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TimestreamWriteResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TimestreamWriteResponsePrivate.
 */
TimestreamWriteResponse::TimestreamWriteResponse(TimestreamWriteResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TimestreamWriteResponse::parseFailure(QIODevice &response)
{
    //Q_D(TimestreamWriteResponse);
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
 * \class QtAws::TimestreamWrite::TimestreamWriteResponsePrivate
 * \brief The TimestreamWriteResponsePrivate class provides private implementation for TimestreamWriteResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a TimestreamWriteResponsePrivate object with public implementation \a q.
 */
TimestreamWriteResponsePrivate::TimestreamWriteResponsePrivate(
    TimestreamWriteResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace TimestreamWrite
} // namespace QtAws
