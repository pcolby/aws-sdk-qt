// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehsmrequest.h"
#include "describehsmrequest_p.h"
#include "describehsmresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DescribeHsmRequest
 * \brief The DescribeHsmRequest class provides an interface for CloudHsm DescribeHsm requests.
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
 * \sa CloudHsmClient::describeHsm
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHsmRequest::DescribeHsmRequest(const DescribeHsmRequest &other)
    : CloudHsmRequest(new DescribeHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHsmRequest object.
 */
DescribeHsmRequest::DescribeHsmRequest()
    : CloudHsmRequest(new DescribeHsmRequestPrivate(CloudHsmRequest::DescribeHsmAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHsmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHsmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHsmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHsmResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::DescribeHsmRequestPrivate
 * \brief The DescribeHsmRequestPrivate class provides private implementation for DescribeHsmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DescribeHsmRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
DescribeHsmRequestPrivate::DescribeHsmRequestPrivate(
    const CloudHsmRequest::Action action, DescribeHsmRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHsmRequest
 * class' copy constructor.
 */
DescribeHsmRequestPrivate::DescribeHsmRequestPrivate(
    const DescribeHsmRequestPrivate &other, DescribeHsmRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
