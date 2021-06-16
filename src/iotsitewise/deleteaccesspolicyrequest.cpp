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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
