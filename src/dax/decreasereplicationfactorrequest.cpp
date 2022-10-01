// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "decreasereplicationfactorrequest.h"
#include "decreasereplicationfactorrequest_p.h"
#include "decreasereplicationfactorresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DecreaseReplicationFactorRequest
 * \brief The DecreaseReplicationFactorRequest class provides an interface for Dax DecreaseReplicationFactor requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::decreaseReplicationFactor
 */

/*!
 * Constructs a copy of \a other.
 */
DecreaseReplicationFactorRequest::DecreaseReplicationFactorRequest(const DecreaseReplicationFactorRequest &other)
    : DaxRequest(new DecreaseReplicationFactorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DecreaseReplicationFactorRequest object.
 */
DecreaseReplicationFactorRequest::DecreaseReplicationFactorRequest()
    : DaxRequest(new DecreaseReplicationFactorRequestPrivate(DaxRequest::DecreaseReplicationFactorAction, this))
{

}

/*!
 * \reimp
 */
bool DecreaseReplicationFactorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DecreaseReplicationFactorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DecreaseReplicationFactorRequest::response(QNetworkReply * const reply) const
{
    return new DecreaseReplicationFactorResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DecreaseReplicationFactorRequestPrivate
 * \brief The DecreaseReplicationFactorRequestPrivate class provides private implementation for DecreaseReplicationFactorRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DecreaseReplicationFactorRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DecreaseReplicationFactorRequestPrivate::DecreaseReplicationFactorRequestPrivate(
    const DaxRequest::Action action, DecreaseReplicationFactorRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DecreaseReplicationFactorRequest
 * class' copy constructor.
 */
DecreaseReplicationFactorRequestPrivate::DecreaseReplicationFactorRequestPrivate(
    const DecreaseReplicationFactorRequestPrivate &other, DecreaseReplicationFactorRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
