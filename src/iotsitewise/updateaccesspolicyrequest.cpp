// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccesspolicyrequest.h"
#include "updateaccesspolicyrequest_p.h"
#include "updateaccesspolicyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAccessPolicyRequest
 * \brief The UpdateAccessPolicyRequest class provides an interface for IoTSiteWise UpdateAccessPolicy requests.
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
 * \sa IoTSiteWiseClient::updateAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccessPolicyRequest::UpdateAccessPolicyRequest(const UpdateAccessPolicyRequest &other)
    : IoTSiteWiseRequest(new UpdateAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccessPolicyRequest object.
 */
UpdateAccessPolicyRequest::UpdateAccessPolicyRequest()
    : IoTSiteWiseRequest(new UpdateAccessPolicyRequestPrivate(IoTSiteWiseRequest::UpdateAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAccessPolicyRequestPrivate
 * \brief The UpdateAccessPolicyRequestPrivate class provides private implementation for UpdateAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAccessPolicyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateAccessPolicyRequestPrivate::UpdateAccessPolicyRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessPolicyRequest
 * class' copy constructor.
 */
UpdateAccessPolicyRequestPrivate::UpdateAccessPolicyRequestPrivate(
    const UpdateAccessPolicyRequestPrivate &other, UpdateAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
