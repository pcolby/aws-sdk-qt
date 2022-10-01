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

#include "createfilterrequest.h"
#include "createfilterrequest_p.h"
#include "createfilterresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::CreateFilterRequest
 * \brief The CreateFilterRequest class provides an interface for Inspector2 CreateFilter requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::createFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFilterRequest::CreateFilterRequest(const CreateFilterRequest &other)
    : Inspector2Request(new CreateFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFilterRequest object.
 */
CreateFilterRequest::CreateFilterRequest()
    : Inspector2Request(new CreateFilterRequestPrivate(Inspector2Request::CreateFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::CreateFilterRequestPrivate
 * \brief The CreateFilterRequestPrivate class provides private implementation for CreateFilterRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a CreateFilterRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
CreateFilterRequestPrivate::CreateFilterRequestPrivate(
    const Inspector2Request::Action action, CreateFilterRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFilterRequest
 * class' copy constructor.
 */
CreateFilterRequestPrivate::CreateFilterRequestPrivate(
    const CreateFilterRequestPrivate &other, CreateFilterRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
