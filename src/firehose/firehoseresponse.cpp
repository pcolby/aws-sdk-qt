// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "firehoseresponse.h"
#include "firehoseresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::FirehoseResponse
 * \brief The FirehoseResponse class provides an interface for Firehose responses.
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a FirehoseResponse object with parent \a parent.
 */
FirehoseResponse::FirehoseResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FirehoseResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FirehoseResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FirehoseResponsePrivate.
 */
FirehoseResponse::FirehoseResponse(FirehoseResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FirehoseResponse::parseFailure(QIODevice &response)
{
    //Q_D(FirehoseResponse);
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
 * \class QtAws::Firehose::FirehoseResponsePrivate
 * \brief The FirehoseResponsePrivate class provides private implementation for FirehoseResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a FirehoseResponsePrivate object with public implementation \a q.
 */
FirehoseResponsePrivate::FirehoseResponsePrivate(
    FirehoseResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Firehose
} // namespace QtAws
