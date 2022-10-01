// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
