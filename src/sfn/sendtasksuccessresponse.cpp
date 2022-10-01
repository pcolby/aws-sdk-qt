// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendtasksuccessresponse.h"
#include "sendtasksuccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::SendTaskSuccessResponse
 * \brief The SendTaskSuccessResponse class provides an interace for Sfn SendTaskSuccess responses.
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
 * Parses a successful Sfn SendTaskSuccess \a response.
 */
void SendTaskSuccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendTaskSuccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sfn::SendTaskSuccessResponsePrivate
 * \brief The SendTaskSuccessResponsePrivate class provides private implementation for SendTaskSuccessResponse.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a SendTaskSuccessResponsePrivate object with public implementation \a q.
 */
SendTaskSuccessResponsePrivate::SendTaskSuccessResponsePrivate(
    SendTaskSuccessResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a Sfn SendTaskSuccess response element from \a xml.
 */
void SendTaskSuccessResponsePrivate::parseSendTaskSuccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTaskSuccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sfn
} // namespace QtAws
