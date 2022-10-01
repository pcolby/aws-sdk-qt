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

#include "listtargetresourcetypesrequest.h"
#include "listtargetresourcetypesrequest_p.h"
#include "listtargetresourcetypesresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListTargetResourceTypesRequest
 * \brief The ListTargetResourceTypesRequest class provides an interface for Fis ListTargetResourceTypes requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listTargetResourceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListTargetResourceTypesRequest::ListTargetResourceTypesRequest(const ListTargetResourceTypesRequest &other)
    : FisRequest(new ListTargetResourceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTargetResourceTypesRequest object.
 */
ListTargetResourceTypesRequest::ListTargetResourceTypesRequest()
    : FisRequest(new ListTargetResourceTypesRequestPrivate(FisRequest::ListTargetResourceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTargetResourceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTargetResourceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTargetResourceTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetResourceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::ListTargetResourceTypesRequestPrivate
 * \brief The ListTargetResourceTypesRequestPrivate class provides private implementation for ListTargetResourceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListTargetResourceTypesRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
ListTargetResourceTypesRequestPrivate::ListTargetResourceTypesRequestPrivate(
    const FisRequest::Action action, ListTargetResourceTypesRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTargetResourceTypesRequest
 * class' copy constructor.
 */
ListTargetResourceTypesRequestPrivate::ListTargetResourceTypesRequestPrivate(
    const ListTargetResourceTypesRequestPrivate &other, ListTargetResourceTypesRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
