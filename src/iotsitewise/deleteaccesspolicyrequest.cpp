// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspolicyrequest.h"
#include "deleteaccesspolicyrequest_p.h"
#include "deleteaccesspolicyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteAccessPolicyRequest
 * \brief The DeleteAccessPolicyRequest class provides an interface for IoTSiteWise DeleteAccessPolicy requests.
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
 * \sa IoTSiteWiseClient::deleteAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPolicyRequest::DeleteAccessPolicyRequest(const DeleteAccessPolicyRequest &other)
    : IoTSiteWiseRequest(new DeleteAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPolicyRequest object.
 */
DeleteAccessPolicyRequest::DeleteAccessPolicyRequest()
    : IoTSiteWiseRequest(new DeleteAccessPolicyRequestPrivate(IoTSiteWiseRequest::DeleteAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DeleteAccessPolicyRequestPrivate
 * \brief The DeleteAccessPolicyRequestPrivate class provides private implementation for DeleteAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteAccessPolicyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DeleteAccessPolicyRequestPrivate::DeleteAccessPolicyRequestPrivate(
    const IoTSiteWiseRequest::Action action, DeleteAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPolicyRequest
 * class' copy constructor.
 */
DeleteAccessPolicyRequestPrivate::DeleteAccessPolicyRequestPrivate(
    const DeleteAccessPolicyRequestPrivate &other, DeleteAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
