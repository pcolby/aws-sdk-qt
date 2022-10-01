// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspolicyrequest.h"
#include "createaccesspolicyrequest_p.h"
#include "createaccesspolicyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateAccessPolicyRequest
 * \brief The CreateAccessPolicyRequest class provides an interface for IoTSiteWise CreateAccessPolicy requests.
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
 * \sa IoTSiteWiseClient::createAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccessPolicyRequest::CreateAccessPolicyRequest(const CreateAccessPolicyRequest &other)
    : IoTSiteWiseRequest(new CreateAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccessPolicyRequest object.
 */
CreateAccessPolicyRequest::CreateAccessPolicyRequest()
    : IoTSiteWiseRequest(new CreateAccessPolicyRequestPrivate(IoTSiteWiseRequest::CreateAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreateAccessPolicyRequestPrivate
 * \brief The CreateAccessPolicyRequestPrivate class provides private implementation for CreateAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateAccessPolicyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreateAccessPolicyRequestPrivate::CreateAccessPolicyRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreateAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessPolicyRequest
 * class' copy constructor.
 */
CreateAccessPolicyRequestPrivate::CreateAccessPolicyRequestPrivate(
    const CreateAccessPolicyRequestPrivate &other, CreateAccessPolicyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
