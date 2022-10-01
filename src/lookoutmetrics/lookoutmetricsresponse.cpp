// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lookoutmetricsresponse.h"
#include "lookoutmetricsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::LookoutMetricsResponse
 * \brief The LookoutMetricsResponse class provides an interface for LookoutMetrics responses.
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a LookoutMetricsResponse object with parent \a parent.
 */
LookoutMetricsResponse::LookoutMetricsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LookoutMetricsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LookoutMetricsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutMetricsResponsePrivate.
 */
LookoutMetricsResponse::LookoutMetricsResponse(LookoutMetricsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LookoutMetricsResponse::parseFailure(QIODevice &response)
{
    //Q_D(LookoutMetricsResponse);
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
 * \class QtAws::LookoutMetrics::LookoutMetricsResponsePrivate
 * \brief The LookoutMetricsResponsePrivate class provides private implementation for LookoutMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a LookoutMetricsResponsePrivate object with public implementation \a q.
 */
LookoutMetricsResponsePrivate::LookoutMetricsResponsePrivate(
    LookoutMetricsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
