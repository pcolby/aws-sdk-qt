// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestatemachineresponse.h"
#include "deletestatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::DeleteStateMachineResponse
 * \brief The DeleteStateMachineResponse class provides an interace for Sfn DeleteStateMachine responses.
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
 * \sa SfnClient::deleteStateMachine
 */

/*!
 * Constructs a DeleteStateMachineResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStateMachineResponse::DeleteStateMachineResponse(
        const DeleteStateMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SfnResponse(new DeleteStateMachineResponsePrivate(this), parent)
{
    setRequest(new DeleteStateMachineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStateMachineRequest * DeleteStateMachineResponse::request() const
{
    Q_D(const DeleteStateMachineResponse);
    return static_cast<const DeleteStateMachineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sfn DeleteStateMachine \a response.
 */
void DeleteStateMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStateMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sfn::DeleteStateMachineResponsePrivate
 * \brief The DeleteStateMachineResponsePrivate class provides private implementation for DeleteStateMachineResponse.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a DeleteStateMachineResponsePrivate object with public implementation \a q.
 */
DeleteStateMachineResponsePrivate::DeleteStateMachineResponsePrivate(
    DeleteStateMachineResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a Sfn DeleteStateMachine response element from \a xml.
 */
void DeleteStateMachineResponsePrivate::parseDeleteStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStateMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sfn
} // namespace QtAws
