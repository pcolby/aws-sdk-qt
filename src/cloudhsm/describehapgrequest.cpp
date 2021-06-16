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

#include "describehapgrequest.h"
#include "describehapgrequest_p.h"
#include "describehapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DescribeHapgRequest
 * \brief The DescribeHapgRequest class provides an interface for CloudHSM DescribeHapg requests.
 *
 * \inmodule QtAwsCloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::describeHapg
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHapgRequest::DescribeHapgRequest(const DescribeHapgRequest &other)
    : CloudHSMRequest(new DescribeHapgRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHapgRequest object.
 */
DescribeHapgRequest::DescribeHapgRequest()
    : CloudHSMRequest(new DescribeHapgRequestPrivate(CloudHSMRequest::DescribeHapgAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHapgRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHapgResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHapgRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHapgResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSM::DescribeHapgRequestPrivate
 * \brief The DescribeHapgRequestPrivate class provides private implementation for DescribeHapgRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a DescribeHapgRequestPrivate object for CloudHSM \a action,
 * with public implementation \a q.
 */
DescribeHapgRequestPrivate::DescribeHapgRequestPrivate(
    const CloudHSMRequest::Action action, DescribeHapgRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHapgRequest
 * class' copy constructor.
 */
DescribeHapgRequestPrivate::DescribeHapgRequestPrivate(
    const DescribeHapgRequestPrivate &other, DescribeHapgRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
