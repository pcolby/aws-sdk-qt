// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "increasereplicationfactorrequest.h"
#include "increasereplicationfactorrequest_p.h"
#include "increasereplicationfactorresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::IncreaseReplicationFactorRequest
 * \brief The IncreaseReplicationFactorRequest class provides an interface for Dax IncreaseReplicationFactor requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::increaseReplicationFactor
 */

/*!
 * Constructs a copy of \a other.
 */
IncreaseReplicationFactorRequest::IncreaseReplicationFactorRequest(const IncreaseReplicationFactorRequest &other)
    : DaxRequest(new IncreaseReplicationFactorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IncreaseReplicationFactorRequest object.
 */
IncreaseReplicationFactorRequest::IncreaseReplicationFactorRequest()
    : DaxRequest(new IncreaseReplicationFactorRequestPrivate(DaxRequest::IncreaseReplicationFactorAction, this))
{

}

/*!
 * \reimp
 */
bool IncreaseReplicationFactorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a IncreaseReplicationFactorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IncreaseReplicationFactorRequest::response(QNetworkReply * const reply) const
{
    return new IncreaseReplicationFactorResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::IncreaseReplicationFactorRequestPrivate
 * \brief The IncreaseReplicationFactorRequestPrivate class provides private implementation for IncreaseReplicationFactorRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a IncreaseReplicationFactorRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
IncreaseReplicationFactorRequestPrivate::IncreaseReplicationFactorRequestPrivate(
    const DaxRequest::Action action, IncreaseReplicationFactorRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IncreaseReplicationFactorRequest
 * class' copy constructor.
 */
IncreaseReplicationFactorRequestPrivate::IncreaseReplicationFactorRequestPrivate(
    const IncreaseReplicationFactorRequestPrivate &other, IncreaseReplicationFactorRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
