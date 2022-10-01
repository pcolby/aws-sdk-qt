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

#include "disablerequest.h"
#include "disablerequest_p.h"
#include "disableresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisableRequest
 * \brief The DisableRequest class provides an interface for Inspector2 Disable requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disable
 */

/*!
 * Constructs a copy of \a other.
 */
DisableRequest::DisableRequest(const DisableRequest &other)
    : Inspector2Request(new DisableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableRequest object.
 */
DisableRequest::DisableRequest()
    : Inspector2Request(new DisableRequestPrivate(Inspector2Request::DisableAction, this))
{

}

/*!
 * \reimp
 */
bool DisableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableRequest::response(QNetworkReply * const reply) const
{
    return new DisableResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::DisableRequestPrivate
 * \brief The DisableRequestPrivate class provides private implementation for DisableRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisableRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
DisableRequestPrivate::DisableRequestPrivate(
    const Inspector2Request::Action action, DisableRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableRequest
 * class' copy constructor.
 */
DisableRequestPrivate::DisableRequestPrivate(
    const DisableRequestPrivate &other, DisableRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
