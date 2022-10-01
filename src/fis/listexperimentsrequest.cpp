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

#include "listexperimentsrequest.h"
#include "listexperimentsrequest_p.h"
#include "listexperimentsresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListExperimentsRequest
 * \brief The ListExperimentsRequest class provides an interface for Fis ListExperiments requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listExperiments
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperimentsRequest::ListExperimentsRequest(const ListExperimentsRequest &other)
    : FisRequest(new ListExperimentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperimentsRequest object.
 */
ListExperimentsRequest::ListExperimentsRequest()
    : FisRequest(new ListExperimentsRequestPrivate(FisRequest::ListExperimentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperimentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperimentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperimentsRequest::response(QNetworkReply * const reply) const
{
    return new ListExperimentsResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::ListExperimentsRequestPrivate
 * \brief The ListExperimentsRequestPrivate class provides private implementation for ListExperimentsRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListExperimentsRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const FisRequest::Action action, ListExperimentsRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperimentsRequest
 * class' copy constructor.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const ListExperimentsRequestPrivate &other, ListExperimentsRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
