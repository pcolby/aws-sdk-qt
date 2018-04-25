/*
    Copyright 2013-2018 Paul Colby

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

#include "decreasereplicationfactorrequest.h"
#include "decreasereplicationfactorrequest_p.h"
#include "decreasereplicationfactorresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DecreaseReplicationFactorRequest
 * \brief The DecreaseReplicationFactorRequest class provides an interface for DAX DecreaseReplicationFactor requests.
 *
 * \inmodule QtAwsDAX
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
 * \class QtAws::DAX::DecreaseReplicationFactorRequestPrivate
 * \brief The DecreaseReplicationFactorRequestPrivate class provides private implementation for DecreaseReplicationFactorRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
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

} // namespace DAX
} // namespace QtAws
