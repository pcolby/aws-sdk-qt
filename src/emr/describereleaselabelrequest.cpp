// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereleaselabelrequest.h"
#include "describereleaselabelrequest_p.h"
#include "describereleaselabelresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeReleaseLabelRequest
 * \brief The DescribeReleaseLabelRequest class provides an interface for Emr DescribeReleaseLabel requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeReleaseLabel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReleaseLabelRequest::DescribeReleaseLabelRequest(const DescribeReleaseLabelRequest &other)
    : EmrRequest(new DescribeReleaseLabelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReleaseLabelRequest object.
 */
DescribeReleaseLabelRequest::DescribeReleaseLabelRequest()
    : EmrRequest(new DescribeReleaseLabelRequestPrivate(EmrRequest::DescribeReleaseLabelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReleaseLabelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReleaseLabelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReleaseLabelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReleaseLabelResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeReleaseLabelRequestPrivate
 * \brief The DescribeReleaseLabelRequestPrivate class provides private implementation for DescribeReleaseLabelRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeReleaseLabelRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeReleaseLabelRequestPrivate::DescribeReleaseLabelRequestPrivate(
    const EmrRequest::Action action, DescribeReleaseLabelRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReleaseLabelRequest
 * class' copy constructor.
 */
DescribeReleaseLabelRequestPrivate::DescribeReleaseLabelRequestPrivate(
    const DescribeReleaseLabelRequestPrivate &other, DescribeReleaseLabelRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
