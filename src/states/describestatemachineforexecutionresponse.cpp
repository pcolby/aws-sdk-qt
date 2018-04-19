/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describestatemachineforexecutionresponse.h"
#include "describestatemachineforexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::DescribeStateMachineForExecutionResponse
 * \brief The DescribeStateMachineForExecutionResponse class provides an interace for SFN DescribeStateMachineForExecution responses.
 *
 * \inmodule QtAwsSFN
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SfnClient::describeStateMachineForExecution
 */

/*!
 * Constructs a DescribeStateMachineForExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStateMachineForExecutionResponse::DescribeStateMachineForExecutionResponse(
        const DescribeStateMachineForExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DescribeStateMachineForExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeStateMachineForExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStateMachineForExecutionRequest * DescribeStateMachineForExecutionResponse::request() const
{
    Q_D(const DescribeStateMachineForExecutionResponse);
    return static_cast<const DescribeStateMachineForExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SFN DescribeStateMachineForExecution \a response.
 */
void DescribeStateMachineForExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStateMachineForExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SFN::DescribeStateMachineForExecutionResponsePrivate
 * \brief The DescribeStateMachineForExecutionResponsePrivate class provides private implementation for DescribeStateMachineForExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a DescribeStateMachineForExecutionResponsePrivate object with public implementation \a q.
 */
DescribeStateMachineForExecutionResponsePrivate::DescribeStateMachineForExecutionResponsePrivate(
    DescribeStateMachineForExecutionResponse * const q) : SFNResponsePrivate(q)
{

}

/*!
 * Parses a SFN DescribeStateMachineForExecution response element from \a xml.
 */
void DescribeStateMachineForExecutionResponsePrivate::parseDescribeStateMachineForExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStateMachineForExecutionResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
