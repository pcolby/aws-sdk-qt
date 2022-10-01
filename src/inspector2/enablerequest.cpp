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

#include "enablerequest.h"
#include "enablerequest_p.h"
#include "enableresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::EnableRequest
 * \brief The EnableRequest class provides an interface for Inspector2 Enable requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::enable
 */

/*!
 * Constructs a copy of \a other.
 */
EnableRequest::EnableRequest(const EnableRequest &other)
    : Inspector2Request(new EnableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableRequest object.
 */
EnableRequest::EnableRequest()
    : Inspector2Request(new EnableRequestPrivate(Inspector2Request::EnableAction, this))
{

}

/*!
 * \reimp
 */
bool EnableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableRequest::response(QNetworkReply * const reply) const
{
    return new EnableResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::EnableRequestPrivate
 * \brief The EnableRequestPrivate class provides private implementation for EnableRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a EnableRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
EnableRequestPrivate::EnableRequestPrivate(
    const Inspector2Request::Action action, EnableRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableRequest
 * class' copy constructor.
 */
EnableRequestPrivate::EnableRequestPrivate(
    const EnableRequestPrivate &other, EnableRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
