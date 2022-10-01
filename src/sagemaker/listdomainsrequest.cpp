// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsrequest.h"
#include "listdomainsrequest_p.h"
#include "listdomainsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDomainsRequest
 * \brief The ListDomainsRequest class provides an interface for SageMaker ListDomains requests.
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
 * \sa SageMakerClient::listDomains
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainsRequest::ListDomainsRequest(const ListDomainsRequest &other)
    : SageMakerRequest(new ListDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainsRequest object.
 */
ListDomainsRequest::ListDomainsRequest()
    : SageMakerRequest(new ListDomainsRequestPrivate(SageMakerRequest::ListDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListDomainsRequestPrivate
 * \brief The ListDomainsRequestPrivate class provides private implementation for ListDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDomainsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const SageMakerRequest::Action action, ListDomainsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsRequest
 * class' copy constructor.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const ListDomainsRequestPrivate &other, ListDomainsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
