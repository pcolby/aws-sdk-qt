// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "autoscalingplansresponse.h"
#include "autoscalingplansresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansResponse
 * \brief The AutoScalingPlansResponse class provides an interface for AutoScalingPlans responses.
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a AutoScalingPlansResponse object with parent \a parent.
 */
AutoScalingPlansResponse::AutoScalingPlansResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AutoScalingPlansResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AutoScalingPlansResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingPlansResponsePrivate.
 */
AutoScalingPlansResponse::AutoScalingPlansResponse(AutoScalingPlansResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AutoScalingPlansResponse::parseFailure(QIODevice &response)
{
    //Q_D(AutoScalingPlansResponse);
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
 * \class QtAws::AutoScalingPlans::AutoScalingPlansResponsePrivate
 * \brief The AutoScalingPlansResponsePrivate class provides private implementation for AutoScalingPlansResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a AutoScalingPlansResponsePrivate object with public implementation \a q.
 */
AutoScalingPlansResponsePrivate::AutoScalingPlansResponsePrivate(
    AutoScalingPlansResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
