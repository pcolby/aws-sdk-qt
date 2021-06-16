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

#include "describedatasetexportjobrequest.h"
#include "describedatasetexportjobrequest_p.h"
#include "describedatasetexportjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetExportJobRequest
 * \brief The DescribeDatasetExportJobRequest class provides an interface for Personalize DescribeDatasetExportJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDatasetExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetExportJobRequest::DescribeDatasetExportJobRequest(const DescribeDatasetExportJobRequest &other)
    : PersonalizeRequest(new DescribeDatasetExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetExportJobRequest object.
 */
DescribeDatasetExportJobRequest::DescribeDatasetExportJobRequest()
    : PersonalizeRequest(new DescribeDatasetExportJobRequestPrivate(PersonalizeRequest::DescribeDatasetExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeDatasetExportJobRequestPrivate
 * \brief The DescribeDatasetExportJobRequestPrivate class provides private implementation for DescribeDatasetExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetExportJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeDatasetExportJobRequestPrivate::DescribeDatasetExportJobRequestPrivate(
    const PersonalizeRequest::Action action, DescribeDatasetExportJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetExportJobRequest
 * class' copy constructor.
 */
DescribeDatasetExportJobRequestPrivate::DescribeDatasetExportJobRequestPrivate(
    const DescribeDatasetExportJobRequestPrivate &other, DescribeDatasetExportJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
