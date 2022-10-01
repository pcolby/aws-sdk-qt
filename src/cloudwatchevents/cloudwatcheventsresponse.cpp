// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudwatcheventsresponse.h"
#include "cloudwatcheventsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsResponse
 * \brief The CloudWatchEventsResponse class provides an interface for CloudWatchEvents responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CloudWatchEventsResponse object with parent \a parent.
 */
CloudWatchEventsResponse::CloudWatchEventsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchEventsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudWatchEventsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchEventsResponsePrivate.
 */
CloudWatchEventsResponse::CloudWatchEventsResponse(CloudWatchEventsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudWatchEventsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudWatchEventsResponse);
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
 * \class QtAws::CloudWatchEvents::CloudWatchEventsResponsePrivate
 * \brief The CloudWatchEventsResponsePrivate class provides private implementation for CloudWatchEventsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CloudWatchEventsResponsePrivate object with public implementation \a q.
 */
CloudWatchEventsResponsePrivate::CloudWatchEventsResponsePrivate(
    CloudWatchEventsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
