/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new WorkMailMessageFlowResponsePrivate(this))
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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
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
    WorkMailMessageFlowResponse * const q) : q_ptr(q)
{

}

} // namespace WorkMailMessageFlow
} // namespace QtAws
