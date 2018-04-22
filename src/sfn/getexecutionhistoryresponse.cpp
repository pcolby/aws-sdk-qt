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

#include "getexecutionhistoryresponse.h"
#include "getexecutionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::GetExecutionHistoryResponse
 * \brief The GetExecutionHistoryResponse class provides an interace for SFN GetExecutionHistory responses.
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
 * \sa SfnClient::getExecutionHistory
 */

/*!
 * Constructs a GetExecutionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetExecutionHistoryResponse::GetExecutionHistoryResponse(
        const GetExecutionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SfnResponse(new GetExecutionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetExecutionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExecutionHistoryRequest * GetExecutionHistoryResponse::request() const
{
    Q_D(const GetExecutionHistoryResponse);
    return static_cast<const GetExecutionHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SFN GetExecutionHistory \a response.
 */
void GetExecutionHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetExecutionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SFN::GetExecutionHistoryResponsePrivate
 * \brief The GetExecutionHistoryResponsePrivate class provides private implementation for GetExecutionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a GetExecutionHistoryResponsePrivate object with public implementation \a q.
 */
GetExecutionHistoryResponsePrivate::GetExecutionHistoryResponsePrivate(
    GetExecutionHistoryResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a SFN GetExecutionHistory response element from \a xml.
 */
void GetExecutionHistoryResponsePrivate::parseGetExecutionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExecutionHistoryResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
