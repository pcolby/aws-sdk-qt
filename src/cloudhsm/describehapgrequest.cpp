// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehapgrequest.h"
#include "describehapgrequest_p.h"
#include "describehapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DescribeHapgRequest
 * \brief The DescribeHapgRequest class provides an interface for CloudHsm DescribeHapg requests.
 *
 * \inmodule QtAwsCloudHsm
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
 * \sa CloudHsmClient::describeHapg
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHapgRequest::DescribeHapgRequest(const DescribeHapgRequest &other)
    : CloudHsmRequest(new DescribeHapgRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHapgRequest object.
 */
DescribeHapgRequest::DescribeHapgRequest()
    : CloudHsmRequest(new DescribeHapgRequestPrivate(CloudHsmRequest::DescribeHapgAction, this))
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
 * \class QtAws::CloudHsm::DescribeHapgRequestPrivate
 * \brief The DescribeHapgRequestPrivate class provides private implementation for DescribeHapgRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DescribeHapgRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
DescribeHapgRequestPrivate::DescribeHapgRequestPrivate(
    const CloudHsmRequest::Action action, DescribeHapgRequest * const q)
    : CloudHsmRequestPrivate(action, q)
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
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
