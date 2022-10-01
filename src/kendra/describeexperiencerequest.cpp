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

#include "describeexperiencerequest.h"
#include "describeexperiencerequest_p.h"
#include "describeexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeExperienceRequest
 * \brief The DescribeExperienceRequest class provides an interface for Kendra DescribeExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeExperience
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExperienceRequest::DescribeExperienceRequest(const DescribeExperienceRequest &other)
    : KendraRequest(new DescribeExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExperienceRequest object.
 */
DescribeExperienceRequest::DescribeExperienceRequest()
    : KendraRequest(new DescribeExperienceRequestPrivate(KendraRequest::DescribeExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExperienceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeExperienceRequestPrivate
 * \brief The DescribeExperienceRequestPrivate class provides private implementation for DescribeExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeExperienceRequestPrivate::DescribeExperienceRequestPrivate(
    const KendraRequest::Action action, DescribeExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExperienceRequest
 * class' copy constructor.
 */
DescribeExperienceRequestPrivate::DescribeExperienceRequestPrivate(
    const DescribeExperienceRequestPrivate &other, DescribeExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
