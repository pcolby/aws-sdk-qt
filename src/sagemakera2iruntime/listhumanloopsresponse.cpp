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

#include "listhumanloopsresponse.h"
#include "listhumanloopsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::ListHumanLoopsResponse
 * \brief The ListHumanLoopsResponse class provides an interace for SageMakerA2IRuntime ListHumanLoops responses.
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 *
 *  Amazon Augmented AI (Amazon A2I) adds the benefit of human judgment to any machine learning application. When an AI
 *  application can't evaluate data with a high degree of confidence, human reviewers can take over. This human review is
 *  called a human review workflow. To create and start a human review workflow, you need three resources: a <i>worker task
 *  template</i>, a <i>flow definition</i>, and a <i>human
 * 
 *  loop</i>>
 * 
 *  For information about these resources and prerequisites for using Amazon A2I, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-getting-started.html">Get Started with Amazon Augmented AI</a>
 *  in the Amazon SageMaker Developer
 * 
 *  Guide>
 * 
 *  This API reference includes information about API actions and data types that you can use to interact with Amazon A2I
 *  programmatically. Use this guide
 * 
 *  to> <ul> <li>
 * 
 *  Start a human loop with the <code>StartHumanLoop</code> operation when using Amazon A2I with a <i>custom task type</i>.
 *  To learn more about the difference between custom and built-in task types, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-task-types-general.html">Use Task Types </a>. To learn how to
 *  start a human loop using this API, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-start-human-loop.html#a2i-instructions-starthumanloop">Create
 *  and Start a Human Loop for a Custom Task Type </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> <li>
 * 
 *  Manage your human loops. You can list all human loops that you have created, describe individual human loops, and stop
 *  and delete human loops. To learn more, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-monitor-humanloop-results.html">Monitor and Manage Your Human
 *  Loop </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> </ul>
 * 
 *  Amazon A2I integrates APIs from various AWS services to create and start human review workflows for those services. To
 *  learn how Amazon A2I uses these APIs, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-api-references.html">Use APIs in Amazon A2I</a> in the Amazon
 *  SageMaker Developer
 *
 * \sa SageMakerA2IRuntimeClient::listHumanLoops
 */

/*!
 * Constructs a ListHumanLoopsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHumanLoopsResponse::ListHumanLoopsResponse(
        const ListHumanLoopsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerA2IRuntimeResponse(new ListHumanLoopsResponsePrivate(this), parent)
{
    setRequest(new ListHumanLoopsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHumanLoopsRequest * ListHumanLoopsResponse::request() const
{
    Q_D(const ListHumanLoopsResponse);
    return static_cast<const ListHumanLoopsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMakerA2IRuntime ListHumanLoops \a response.
 */
void ListHumanLoopsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHumanLoopsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMakerA2IRuntime::ListHumanLoopsResponsePrivate
 * \brief The ListHumanLoopsResponsePrivate class provides private implementation for ListHumanLoopsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a ListHumanLoopsResponsePrivate object with public implementation \a q.
 */
ListHumanLoopsResponsePrivate::ListHumanLoopsResponsePrivate(
    ListHumanLoopsResponse * const q) : SageMakerA2IRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a SageMakerA2IRuntime ListHumanLoops response element from \a xml.
 */
void ListHumanLoopsResponsePrivate::parseListHumanLoopsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHumanLoopsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMakerA2IRuntime
} // namespace QtAws
