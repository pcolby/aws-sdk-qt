// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexecutionsrequest.h"
#include "listexecutionsrequest_p.h"
#include "listexecutionsresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::ListExecutionsRequest
 * \brief The ListExecutionsRequest class provides an interface for Sfn ListExecutions requests.
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
 * \sa SfnClient::listExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListExecutionsRequest::ListExecutionsRequest(const ListExecutionsRequest &other)
    : SfnRequest(new ListExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExecutionsRequest object.
 */
ListExecutionsRequest::ListExecutionsRequest()
    : SfnRequest(new ListExecutionsRequestPrivate(SfnRequest::ListExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Sfn::ListExecutionsRequestPrivate
 * \brief The ListExecutionsRequestPrivate class provides private implementation for ListExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a ListExecutionsRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const SfnRequest::Action action, ListExecutionsRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExecutionsRequest
 * class' copy constructor.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const ListExecutionsRequestPrivate &other, ListExecutionsRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace Sfn
} // namespace QtAws
