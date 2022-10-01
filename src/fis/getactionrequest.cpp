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

#include "getactionrequest.h"
#include "getactionrequest_p.h"
#include "getactionresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetActionRequest
 * \brief The GetActionRequest class provides an interface for Fis GetAction requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getAction
 */

/*!
 * Constructs a copy of \a other.
 */
GetActionRequest::GetActionRequest(const GetActionRequest &other)
    : FisRequest(new GetActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetActionRequest object.
 */
GetActionRequest::GetActionRequest()
    : FisRequest(new GetActionRequestPrivate(FisRequest::GetActionAction, this))
{

}

/*!
 * \reimp
 */
bool GetActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetActionRequest::response(QNetworkReply * const reply) const
{
    return new GetActionResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::GetActionRequestPrivate
 * \brief The GetActionRequestPrivate class provides private implementation for GetActionRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetActionRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
GetActionRequestPrivate::GetActionRequestPrivate(
    const FisRequest::Action action, GetActionRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetActionRequest
 * class' copy constructor.
 */
GetActionRequestPrivate::GetActionRequestPrivate(
    const GetActionRequestPrivate &other, GetActionRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
