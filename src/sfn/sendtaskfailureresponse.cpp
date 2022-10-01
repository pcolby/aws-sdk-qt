// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendtaskfailureresponse.h"
#include "sendtaskfailureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::SendTaskFailureResponse
 * \brief The SendTaskFailureResponse class provides an interace for Sfn SendTaskFailure responses.
 *
 * \inmodule QtAwsSfn
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
 * \sa SfnClient::sendTaskFailure
 */

/*!
 * Constructs a SendTaskFailureResponse object for \a reply to \a request, with parent \a parent.
 */
SendTaskFailureResponse::SendTaskFailureResponse(
        const SendTaskFailureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SfnResponse(new SendTaskFailureResponsePrivate(this), parent)
{
    setRequest(new SendTaskFailureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendTaskFailureRequest * SendTaskFailureResponse::request() const
{
    Q_D(const SendTaskFailureResponse);
    return static_cast<const SendTaskFailureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sfn SendTaskFailure \a response.
 */
void SendTaskFailureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendTaskFailureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sfn::SendTaskFailureResponsePrivate
 * \brief The SendTaskFailureResponsePrivate class provides private implementation for SendTaskFailureResponse.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a SendTaskFailureResponsePrivate object with public implementation \a q.
 */
SendTaskFailureResponsePrivate::SendTaskFailureResponsePrivate(
    SendTaskFailureResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a Sfn SendTaskFailure response element from \a xml.
 */
void SendTaskFailureResponsePrivate::parseSendTaskFailureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTaskFailureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sfn
} // namespace QtAws
