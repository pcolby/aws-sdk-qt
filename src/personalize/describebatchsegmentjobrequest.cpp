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

#include "describebatchsegmentjobrequest.h"
#include "describebatchsegmentjobrequest_p.h"
#include "describebatchsegmentjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeBatchSegmentJobRequest
 * \brief The DescribeBatchSegmentJobRequest class provides an interface for Personalize DescribeBatchSegmentJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeBatchSegmentJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBatchSegmentJobRequest::DescribeBatchSegmentJobRequest(const DescribeBatchSegmentJobRequest &other)
    : PersonalizeRequest(new DescribeBatchSegmentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBatchSegmentJobRequest object.
 */
DescribeBatchSegmentJobRequest::DescribeBatchSegmentJobRequest()
    : PersonalizeRequest(new DescribeBatchSegmentJobRequestPrivate(PersonalizeRequest::DescribeBatchSegmentJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBatchSegmentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBatchSegmentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBatchSegmentJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBatchSegmentJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeBatchSegmentJobRequestPrivate
 * \brief The DescribeBatchSegmentJobRequestPrivate class provides private implementation for DescribeBatchSegmentJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeBatchSegmentJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeBatchSegmentJobRequestPrivate::DescribeBatchSegmentJobRequestPrivate(
    const PersonalizeRequest::Action action, DescribeBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBatchSegmentJobRequest
 * class' copy constructor.
 */
DescribeBatchSegmentJobRequestPrivate::DescribeBatchSegmentJobRequestPrivate(
    const DescribeBatchSegmentJobRequestPrivate &other, DescribeBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
