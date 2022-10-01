// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhumanloopsrequest.h"
#include "listhumanloopsrequest_p.h"
#include "listhumanloopsresponse.h"
#include "sagemakera2iruntimerequest_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::ListHumanLoopsRequest
 * \brief The ListHumanLoopsRequest class provides an interface for SageMakerA2IRuntime ListHumanLoops requests.
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
 * Constructs a copy of \a other.
 */
ListHumanLoopsRequest::ListHumanLoopsRequest(const ListHumanLoopsRequest &other)
    : SageMakerA2IRuntimeRequest(new ListHumanLoopsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHumanLoopsRequest object.
 */
ListHumanLoopsRequest::ListHumanLoopsRequest()
    : SageMakerA2IRuntimeRequest(new ListHumanLoopsRequestPrivate(SageMakerA2IRuntimeRequest::ListHumanLoopsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHumanLoopsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHumanLoopsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHumanLoopsRequest::response(QNetworkReply * const reply) const
{
    return new ListHumanLoopsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerA2IRuntime::ListHumanLoopsRequestPrivate
 * \brief The ListHumanLoopsRequestPrivate class provides private implementation for ListHumanLoopsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a ListHumanLoopsRequestPrivate object for SageMakerA2IRuntime \a action,
 * with public implementation \a q.
 */
ListHumanLoopsRequestPrivate::ListHumanLoopsRequestPrivate(
    const SageMakerA2IRuntimeRequest::Action action, ListHumanLoopsRequest * const q)
    : SageMakerA2IRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHumanLoopsRequest
 * class' copy constructor.
 */
ListHumanLoopsRequestPrivate::ListHumanLoopsRequestPrivate(
    const ListHumanLoopsRequestPrivate &other, ListHumanLoopsRequest * const q)
    : SageMakerA2IRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerA2IRuntime
} // namespace QtAws
