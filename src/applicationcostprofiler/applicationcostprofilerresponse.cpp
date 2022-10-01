// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationcostprofilerresponse.h"
#include "applicationcostprofilerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerResponse
 * \brief The ApplicationCostProfilerResponse class provides an interface for ApplicationCostProfiler responses.
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ApplicationCostProfilerResponse object with parent \a parent.
 */
ApplicationCostProfilerResponse::ApplicationCostProfilerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationCostProfilerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationCostProfilerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationCostProfilerResponsePrivate.
 */
ApplicationCostProfilerResponse::ApplicationCostProfilerResponse(ApplicationCostProfilerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationCostProfilerResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationCostProfilerResponse);
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
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerResponsePrivate
 * \brief The ApplicationCostProfilerResponsePrivate class provides private implementation for ApplicationCostProfilerResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ApplicationCostProfilerResponsePrivate object with public implementation \a q.
 */
ApplicationCostProfilerResponsePrivate::ApplicationCostProfilerResponsePrivate(
    ApplicationCostProfilerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
