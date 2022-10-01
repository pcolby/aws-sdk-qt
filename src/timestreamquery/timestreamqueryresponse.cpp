// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "timestreamqueryresponse.h"
#include "timestreamqueryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::TimestreamQueryResponse
 * \brief The TimestreamQueryResponse class provides an interface for TimestreamQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TimestreamQueryResponse object with parent \a parent.
 */
TimestreamQueryResponse::TimestreamQueryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TimestreamQueryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TimestreamQueryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TimestreamQueryResponsePrivate.
 */
TimestreamQueryResponse::TimestreamQueryResponse(TimestreamQueryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TimestreamQueryResponse::parseFailure(QIODevice &response)
{
    //Q_D(TimestreamQueryResponse);
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
 * \class QtAws::TimestreamQuery::TimestreamQueryResponsePrivate
 * \brief The TimestreamQueryResponsePrivate class provides private implementation for TimestreamQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TimestreamQueryResponsePrivate object with public implementation \a q.
 */
TimestreamQueryResponsePrivate::TimestreamQueryResponsePrivate(
    TimestreamQueryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
