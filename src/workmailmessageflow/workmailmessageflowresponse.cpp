// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workmailmessageflowresponse.h"
#include "workmailmessageflowresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::WorkMailMessageFlowResponse
 * \brief The WorkMailMessageFlowResponse class provides an interface for WorkMailMessageFlow responses.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a WorkMailMessageFlowResponse object with parent \a parent.
 */
WorkMailMessageFlowResponse::WorkMailMessageFlowResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkMailMessageFlowResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkMailMessageFlowResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkMailMessageFlowResponsePrivate.
 */
WorkMailMessageFlowResponse::WorkMailMessageFlowResponse(WorkMailMessageFlowResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkMailMessageFlowResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkMailMessageFlowResponse);
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
 * \class QtAws::WorkMailMessageFlow::WorkMailMessageFlowResponsePrivate
 * \brief The WorkMailMessageFlowResponsePrivate class provides private implementation for WorkMailMessageFlowResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a WorkMailMessageFlowResponsePrivate object with public implementation \a q.
 */
WorkMailMessageFlowResponsePrivate::WorkMailMessageFlowResponsePrivate(
    WorkMailMessageFlowResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkMailMessageFlow
} // namespace QtAws
