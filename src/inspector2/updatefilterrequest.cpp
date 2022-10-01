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

#include "updatefilterrequest.h"
#include "updatefilterrequest_p.h"
#include "updatefilterresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateFilterRequest
 * \brief The UpdateFilterRequest class provides an interface for Inspector2 UpdateFilter requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateFilter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFilterRequest::UpdateFilterRequest(const UpdateFilterRequest &other)
    : Inspector2Request(new UpdateFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFilterRequest object.
 */
UpdateFilterRequest::UpdateFilterRequest()
    : Inspector2Request(new UpdateFilterRequestPrivate(Inspector2Request::UpdateFilterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFilterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::UpdateFilterRequestPrivate
 * \brief The UpdateFilterRequestPrivate class provides private implementation for UpdateFilterRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateFilterRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
UpdateFilterRequestPrivate::UpdateFilterRequestPrivate(
    const Inspector2Request::Action action, UpdateFilterRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFilterRequest
 * class' copy constructor.
 */
UpdateFilterRequestPrivate::UpdateFilterRequestPrivate(
    const UpdateFilterRequestPrivate &other, UpdateFilterRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
