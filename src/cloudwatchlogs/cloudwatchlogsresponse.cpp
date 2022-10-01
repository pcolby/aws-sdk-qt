// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudwatchlogsresponse.h"
#include "cloudwatchlogsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::CloudWatchLogsResponse
 * \brief The CloudWatchLogsResponse class provides an interface for CloudWatchLogs responses.
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a CloudWatchLogsResponse object with parent \a parent.
 */
CloudWatchLogsResponse::CloudWatchLogsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchLogsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudWatchLogsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchLogsResponsePrivate.
 */
CloudWatchLogsResponse::CloudWatchLogsResponse(CloudWatchLogsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudWatchLogsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudWatchLogsResponse);
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
 * \class QtAws::CloudWatchLogs::CloudWatchLogsResponsePrivate
 * \brief The CloudWatchLogsResponsePrivate class provides private implementation for CloudWatchLogsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a CloudWatchLogsResponsePrivate object with public implementation \a q.
 */
CloudWatchLogsResponsePrivate::CloudWatchLogsResponsePrivate(
    CloudWatchLogsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
