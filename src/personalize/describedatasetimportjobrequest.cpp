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

#include "describedatasetimportjobrequest.h"
#include "describedatasetimportjobrequest_p.h"
#include "describedatasetimportjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetImportJobRequest
 * \brief The DescribeDatasetImportJobRequest class provides an interface for Personalize DescribeDatasetImportJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest(const DescribeDatasetImportJobRequest &other)
    : PersonalizeRequest(new DescribeDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetImportJobRequest object.
 */
DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest()
    : PersonalizeRequest(new DescribeDatasetImportJobRequestPrivate(PersonalizeRequest::DescribeDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeDatasetImportJobRequestPrivate
 * \brief The DescribeDatasetImportJobRequestPrivate class provides private implementation for DescribeDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetImportJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeDatasetImportJobRequestPrivate::DescribeDatasetImportJobRequestPrivate(
    const PersonalizeRequest::Action action, DescribeDatasetImportJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetImportJobRequest
 * class' copy constructor.
 */
DescribeDatasetImportJobRequestPrivate::DescribeDatasetImportJobRequestPrivate(
    const DescribeDatasetImportJobRequestPrivate &other, DescribeDatasetImportJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
