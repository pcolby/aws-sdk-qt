/*
    Copyright 2013-2019 Paul Colby

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

#include "sendtasksuccessresponse.h"
#include "sendtasksuccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SendTaskSuccessResponse
 * \brief The SendTaskSuccessResponse class provides an interace for SFN SendTaskSuccess responses.
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
 *  href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SfnClient::sendTaskSuccess
 */

/*!
 * Constructs a SendTaskSuccessResponse object for \a reply to \a request, with parent \a parent.
 */
SendTaskSuccessResponse::SendTaskSuccessResponse(
        const SendTaskSuccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SfnResponse(new SendTaskSuccessResponsePrivate(this), parent)
{
    setRequest(new SendTaskSuccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendTaskSuccessRequest * SendTaskSuccessResponse::request() const
{
    Q_D(const SendTaskSuccessResponse);
    return static_cast<const SendTaskSuccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SFN SendTaskSuccess \a response.
 */
void SendTaskSuccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendTaskSuccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SFN::SendTaskSuccessResponsePrivate
 * \brief The SendTaskSuccessResponsePrivate class provides private implementation for SendTaskSuccessResponse.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SendTaskSuccessResponsePrivate object with public implementation \a q.
 */
SendTaskSuccessResponsePrivate::SendTaskSuccessResponsePrivate(
    SendTaskSuccessResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a SFN SendTaskSuccess response element from \a xml.
 */
void SendTaskSuccessResponsePrivate::parseSendTaskSuccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTaskSuccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SFN
} // namespace QtAws
