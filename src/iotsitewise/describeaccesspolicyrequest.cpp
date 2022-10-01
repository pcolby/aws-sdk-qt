// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccesspolicyrequest.h"
#include "describeaccesspolicyrequest_p.h"
#include "describeaccesspolicyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAccessPolicyRequest
 * \brief The DescribeAccessPolicyRequest class provides an interface for IoTSiteWise DescribeAccessPolicy requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::describeAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccessPolicyRequest::DescribeAccessPolicyRequest(const DescribeAccessPolicyRequest &other)
    : IoTSiteWiseRequest(new DescribeAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccessPolicyRequest object.
 */
DescribeAccessPolicyRequest::DescribeAccessPolicyRequest()
    : IoTSiteWiseRequest(new DescribeAccessPolicyRequestPrivate(IoTSiteWiseRequest::DescribeAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAccessPolicyRequestPrivate
 * \brief The DescribeAccessPolicyRequestPrivate class provides private implementation for DescribeAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAccessPolicyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeAccessPolicyRequestPrivate::DescribeAccessPolicyRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccessPolicyRequest
 * class' copy constructor.
 */
DescribeAccessPolicyRequestPrivate::DescribeAccessPolicyRequestPrivate(
    const DescribeAccessPolicyRequestPrivate &other, DescribeAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
