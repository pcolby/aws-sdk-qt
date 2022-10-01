// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestatemachineresponse.h"
#include "updatestatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::UpdateStateMachineResponse
 * \brief The UpdateStateMachineResponse class provides an interace for Sfn UpdateStateMachine responses.
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
 * \sa SfnClient::updateStateMachine
 */

/*!
 * Constructs a UpdateStateMachineResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStateMachineResponse::UpdateStateMachineResponse(
        const UpdateStateMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SfnResponse(new UpdateStateMachineResponsePrivate(this), parent)
{
    setRequest(new UpdateStateMachineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStateMachineRequest * UpdateStateMachineResponse::request() const
{
    Q_D(const UpdateStateMachineResponse);
    return static_cast<const UpdateStateMachineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sfn UpdateStateMachine \a response.
 */
void UpdateStateMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStateMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sfn::UpdateStateMachineResponsePrivate
 * \brief The UpdateStateMachineResponsePrivate class provides private implementation for UpdateStateMachineResponse.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a UpdateStateMachineResponsePrivate object with public implementation \a q.
 */
UpdateStateMachineResponsePrivate::UpdateStateMachineResponsePrivate(
    UpdateStateMachineResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a Sfn UpdateStateMachine response element from \a xml.
 */
void UpdateStateMachineResponsePrivate::parseUpdateStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStateMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sfn
} // namespace QtAws
