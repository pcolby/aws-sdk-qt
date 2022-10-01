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

#include "createbatchsegmentjobrequest.h"
#include "createbatchsegmentjobrequest_p.h"
#include "createbatchsegmentjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateBatchSegmentJobRequest
 * \brief The CreateBatchSegmentJobRequest class provides an interface for Personalize CreateBatchSegmentJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createBatchSegmentJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBatchSegmentJobRequest::CreateBatchSegmentJobRequest(const CreateBatchSegmentJobRequest &other)
    : PersonalizeRequest(new CreateBatchSegmentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBatchSegmentJobRequest object.
 */
CreateBatchSegmentJobRequest::CreateBatchSegmentJobRequest()
    : PersonalizeRequest(new CreateBatchSegmentJobRequestPrivate(PersonalizeRequest::CreateBatchSegmentJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBatchSegmentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBatchSegmentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBatchSegmentJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateBatchSegmentJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateBatchSegmentJobRequestPrivate
 * \brief The CreateBatchSegmentJobRequestPrivate class provides private implementation for CreateBatchSegmentJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateBatchSegmentJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateBatchSegmentJobRequestPrivate::CreateBatchSegmentJobRequestPrivate(
    const PersonalizeRequest::Action action, CreateBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBatchSegmentJobRequest
 * class' copy constructor.
 */
CreateBatchSegmentJobRequestPrivate::CreateBatchSegmentJobRequestPrivate(
    const CreateBatchSegmentJobRequestPrivate &other, CreateBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
