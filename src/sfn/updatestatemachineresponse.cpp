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

#include "updatestatemachineresponse.h"
#include "updatestatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::UpdateStateMachineResponse
 * \brief The UpdateStateMachineResponse class provides an interace for SFN UpdateStateMachine responses.
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
    return static_cast<const UpdateStateMachineRequest *>(SfnResponse::request());
}

/*!
 * \reimp
 * Parses a successful SFN UpdateStateMachine \a response.
 */
void UpdateStateMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStateMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SFN::UpdateStateMachineResponsePrivate
 * \brief The UpdateStateMachineResponsePrivate class provides private implementation for UpdateStateMachineResponse.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a UpdateStateMachineResponsePrivate object with public implementation \a q.
 */
UpdateStateMachineResponsePrivate::UpdateStateMachineResponsePrivate(
    UpdateStateMachineResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a SFN UpdateStateMachine response element from \a xml.
 */
void UpdateStateMachineResponsePrivate::parseUpdateStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStateMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SFN
} // namespace QtAws
