// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
