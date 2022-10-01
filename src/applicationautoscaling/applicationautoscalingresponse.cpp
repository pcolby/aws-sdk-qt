// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationautoscalingresponse.h"
#include "applicationautoscalingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingResponse
 * \brief The ApplicationAutoScalingResponse class provides an interface for ApplicationAutoScaling responses.
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingResponse object with parent \a parent.
 */
ApplicationAutoScalingResponse::ApplicationAutoScalingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationAutoScalingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationAutoScalingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationAutoScalingResponsePrivate.
 */
ApplicationAutoScalingResponse::ApplicationAutoScalingResponse(ApplicationAutoScalingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationAutoScalingResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationAutoScalingResponse);
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
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingResponsePrivate
 * \brief The ApplicationAutoScalingResponsePrivate class provides private implementation for ApplicationAutoScalingResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingResponsePrivate object with public implementation \a q.
 */
ApplicationAutoScalingResponsePrivate::ApplicationAutoScalingResponsePrivate(
    ApplicationAutoScalingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
