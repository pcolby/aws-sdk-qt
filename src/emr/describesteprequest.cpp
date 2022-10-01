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

#include "describesteprequest.h"
#include "describesteprequest_p.h"
#include "describestepresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeStepRequest
 * \brief The DescribeStepRequest class provides an interface for Emr DescribeStep requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeStep
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStepRequest::DescribeStepRequest(const DescribeStepRequest &other)
    : EmrRequest(new DescribeStepRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStepRequest object.
 */
DescribeStepRequest::DescribeStepRequest()
    : EmrRequest(new DescribeStepRequestPrivate(EmrRequest::DescribeStepAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStepRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStepResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStepRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStepResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeStepRequestPrivate
 * \brief The DescribeStepRequestPrivate class provides private implementation for DescribeStepRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeStepRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeStepRequestPrivate::DescribeStepRequestPrivate(
    const EmrRequest::Action action, DescribeStepRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStepRequest
 * class' copy constructor.
 */
DescribeStepRequestPrivate::DescribeStepRequestPrivate(
    const DescribeStepRequestPrivate &other, DescribeStepRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
