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

#include "describebatchinferencejobrequest.h"
#include "describebatchinferencejobrequest_p.h"
#include "describebatchinferencejobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeBatchInferenceJobRequest
 * \brief The DescribeBatchInferenceJobRequest class provides an interface for Personalize DescribeBatchInferenceJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeBatchInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBatchInferenceJobRequest::DescribeBatchInferenceJobRequest(const DescribeBatchInferenceJobRequest &other)
    : PersonalizeRequest(new DescribeBatchInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBatchInferenceJobRequest object.
 */
DescribeBatchInferenceJobRequest::DescribeBatchInferenceJobRequest()
    : PersonalizeRequest(new DescribeBatchInferenceJobRequestPrivate(PersonalizeRequest::DescribeBatchInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBatchInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBatchInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBatchInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBatchInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeBatchInferenceJobRequestPrivate
 * \brief The DescribeBatchInferenceJobRequestPrivate class provides private implementation for DescribeBatchInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeBatchInferenceJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeBatchInferenceJobRequestPrivate::DescribeBatchInferenceJobRequestPrivate(
    const PersonalizeRequest::Action action, DescribeBatchInferenceJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBatchInferenceJobRequest
 * class' copy constructor.
 */
DescribeBatchInferenceJobRequestPrivate::DescribeBatchInferenceJobRequestPrivate(
    const DescribeBatchInferenceJobRequestPrivate &other, DescribeBatchInferenceJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
