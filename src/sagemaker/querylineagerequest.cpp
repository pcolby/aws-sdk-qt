// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "querylineagerequest.h"
#include "querylineagerequest_p.h"
#include "querylineageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::QueryLineageRequest
 * \brief The QueryLineageRequest class provides an interface for SageMaker QueryLineage requests.
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
 * \sa SageMakerClient::queryLineage
 */

/*!
 * Constructs a copy of \a other.
 */
QueryLineageRequest::QueryLineageRequest(const QueryLineageRequest &other)
    : SageMakerRequest(new QueryLineageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryLineageRequest object.
 */
QueryLineageRequest::QueryLineageRequest()
    : SageMakerRequest(new QueryLineageRequestPrivate(SageMakerRequest::QueryLineageAction, this))
{

}

/*!
 * \reimp
 */
bool QueryLineageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryLineageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryLineageRequest::response(QNetworkReply * const reply) const
{
    return new QueryLineageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::QueryLineageRequestPrivate
 * \brief The QueryLineageRequestPrivate class provides private implementation for QueryLineageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a QueryLineageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
QueryLineageRequestPrivate::QueryLineageRequestPrivate(
    const SageMakerRequest::Action action, QueryLineageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryLineageRequest
 * class' copy constructor.
 */
QueryLineageRequestPrivate::QueryLineageRequestPrivate(
    const QueryLineageRequestPrivate &other, QueryLineageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
