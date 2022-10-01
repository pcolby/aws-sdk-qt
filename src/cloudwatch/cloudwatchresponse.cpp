// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudwatchresponse.h"
#include "cloudwatchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::CloudWatchResponse
 * \brief The CloudWatchResponse class provides an interface for CloudWatch responses.
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a CloudWatchResponse object with parent \a parent.
 */
CloudWatchResponse::CloudWatchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudWatchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchResponsePrivate.
 */
CloudWatchResponse::CloudWatchResponse(CloudWatchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudWatchResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudWatchResponse);
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
 * \class QtAws::CloudWatch::CloudWatchResponsePrivate
 * \brief The CloudWatchResponsePrivate class provides private implementation for CloudWatchResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a CloudWatchResponsePrivate object with public implementation \a q.
 */
CloudWatchResponsePrivate::CloudWatchResponsePrivate(
    CloudWatchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudWatch
} // namespace QtAws
