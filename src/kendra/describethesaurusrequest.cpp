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

#include "describethesaurusrequest.h"
#include "describethesaurusrequest_p.h"
#include "describethesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeThesaurusRequest
 * \brief The DescribeThesaurusRequest class provides an interface for Kendra DescribeThesaurus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeThesaurusRequest::DescribeThesaurusRequest(const DescribeThesaurusRequest &other)
    : KendraRequest(new DescribeThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeThesaurusRequest object.
 */
DescribeThesaurusRequest::DescribeThesaurusRequest()
    : KendraRequest(new DescribeThesaurusRequestPrivate(KendraRequest::DescribeThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeThesaurusRequestPrivate
 * \brief The DescribeThesaurusRequestPrivate class provides private implementation for DescribeThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeThesaurusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeThesaurusRequestPrivate::DescribeThesaurusRequestPrivate(
    const KendraRequest::Action action, DescribeThesaurusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeThesaurusRequest
 * class' copy constructor.
 */
DescribeThesaurusRequestPrivate::DescribeThesaurusRequestPrivate(
    const DescribeThesaurusRequestPrivate &other, DescribeThesaurusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
