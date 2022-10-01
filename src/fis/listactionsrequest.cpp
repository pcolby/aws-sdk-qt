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

#include "listactionsrequest.h"
#include "listactionsrequest_p.h"
#include "listactionsresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListActionsRequest
 * \brief The ListActionsRequest class provides an interface for Fis ListActions requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListActionsRequest::ListActionsRequest(const ListActionsRequest &other)
    : FisRequest(new ListActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListActionsRequest object.
 */
ListActionsRequest::ListActionsRequest()
    : FisRequest(new ListActionsRequestPrivate(FisRequest::ListActionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListActionsResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::ListActionsRequestPrivate
 * \brief The ListActionsRequestPrivate class provides private implementation for ListActionsRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListActionsRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const FisRequest::Action action, ListActionsRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListActionsRequest
 * class' copy constructor.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const ListActionsRequestPrivate &other, ListActionsRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
