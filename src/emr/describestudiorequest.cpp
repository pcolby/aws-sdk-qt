// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestudiorequest.h"
#include "describestudiorequest_p.h"
#include "describestudioresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeStudioRequest
 * \brief The DescribeStudioRequest class provides an interface for Emr DescribeStudio requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeStudio
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStudioRequest::DescribeStudioRequest(const DescribeStudioRequest &other)
    : EmrRequest(new DescribeStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStudioRequest object.
 */
DescribeStudioRequest::DescribeStudioRequest()
    : EmrRequest(new DescribeStudioRequestPrivate(EmrRequest::DescribeStudioAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStudioRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeStudioRequestPrivate
 * \brief The DescribeStudioRequestPrivate class provides private implementation for DescribeStudioRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeStudioRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeStudioRequestPrivate::DescribeStudioRequestPrivate(
    const EmrRequest::Action action, DescribeStudioRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStudioRequest
 * class' copy constructor.
 */
DescribeStudioRequestPrivate::DescribeStudioRequestPrivate(
    const DescribeStudioRequestPrivate &other, DescribeStudioRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
