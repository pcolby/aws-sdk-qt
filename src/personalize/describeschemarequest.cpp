/*
    Copyright 2013-2019 Paul Colby

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

#include "describeschemarequest.h"
#include "describeschemarequest_p.h"
#include "describeschemaresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSchemaRequest
 * \brief The DescribeSchemaRequest class provides an interface for Personalize DescribeSchema requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSchemaRequest::DescribeSchemaRequest(const DescribeSchemaRequest &other)
    : PersonalizeRequest(new DescribeSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSchemaRequest object.
 */
DescribeSchemaRequest::DescribeSchemaRequest()
    : PersonalizeRequest(new DescribeSchemaRequestPrivate(PersonalizeRequest::DescribeSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeSchemaRequestPrivate
 * \brief The DescribeSchemaRequestPrivate class provides private implementation for DescribeSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSchemaRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeSchemaRequestPrivate::DescribeSchemaRequestPrivate(
    const PersonalizeRequest::Action action, DescribeSchemaRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSchemaRequest
 * class' copy constructor.
 */
DescribeSchemaRequestPrivate::DescribeSchemaRequestPrivate(
    const DescribeSchemaRequestPrivate &other, DescribeSchemaRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
