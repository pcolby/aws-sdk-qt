// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmonitoringexecutionsrequest.h"
#include "listmonitoringexecutionsrequest_p.h"
#include "listmonitoringexecutionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListMonitoringExecutionsRequest
 * \brief The ListMonitoringExecutionsRequest class provides an interface for SageMaker ListMonitoringExecutions requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listMonitoringExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListMonitoringExecutionsRequest::ListMonitoringExecutionsRequest(const ListMonitoringExecutionsRequest &other)
    : SageMakerRequest(new ListMonitoringExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMonitoringExecutionsRequest object.
 */
ListMonitoringExecutionsRequest::ListMonitoringExecutionsRequest()
    : SageMakerRequest(new ListMonitoringExecutionsRequestPrivate(SageMakerRequest::ListMonitoringExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMonitoringExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMonitoringExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMonitoringExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListMonitoringExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListMonitoringExecutionsRequestPrivate
 * \brief The ListMonitoringExecutionsRequestPrivate class provides private implementation for ListMonitoringExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListMonitoringExecutionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListMonitoringExecutionsRequestPrivate::ListMonitoringExecutionsRequestPrivate(
    const SageMakerRequest::Action action, ListMonitoringExecutionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMonitoringExecutionsRequest
 * class' copy constructor.
 */
ListMonitoringExecutionsRequestPrivate::ListMonitoringExecutionsRequestPrivate(
    const ListMonitoringExecutionsRequestPrivate &other, ListMonitoringExecutionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
