// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationinsightsresponse.h"
#include "applicationinsightsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ApplicationInsightsResponse
 * \brief The ApplicationInsightsResponse class provides an interface for ApplicationInsights responses.
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ApplicationInsightsResponse object with parent \a parent.
 */
ApplicationInsightsResponse::ApplicationInsightsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationInsightsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationInsightsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationInsightsResponsePrivate.
 */
ApplicationInsightsResponse::ApplicationInsightsResponse(ApplicationInsightsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationInsightsResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationInsightsResponse);
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
 * \class QtAws::ApplicationInsights::ApplicationInsightsResponsePrivate
 * \brief The ApplicationInsightsResponsePrivate class provides private implementation for ApplicationInsightsResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ApplicationInsightsResponsePrivate object with public implementation \a q.
 */
ApplicationInsightsResponsePrivate::ApplicationInsightsResponsePrivate(
    ApplicationInsightsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
