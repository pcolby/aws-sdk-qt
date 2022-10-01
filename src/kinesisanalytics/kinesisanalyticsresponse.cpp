// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisanalyticsresponse.h"
#include "kinesisanalyticsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsResponse
 * \brief The KinesisAnalyticsResponse class provides an interface for KinesisAnalytics responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a KinesisAnalyticsResponse object with parent \a parent.
 */
KinesisAnalyticsResponse::KinesisAnalyticsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisAnalyticsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisAnalyticsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisAnalyticsResponsePrivate.
 */
KinesisAnalyticsResponse::KinesisAnalyticsResponse(KinesisAnalyticsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisAnalyticsResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisAnalyticsResponse);
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
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsResponsePrivate
 * \brief The KinesisAnalyticsResponsePrivate class provides private implementation for KinesisAnalyticsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a KinesisAnalyticsResponsePrivate object with public implementation \a q.
 */
KinesisAnalyticsResponsePrivate::KinesisAnalyticsResponsePrivate(
    KinesisAnalyticsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
