// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelresourcerequestrequest.h"
#include "cancelresourcerequestrequest_p.h"
#include "cancelresourcerequestresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CancelResourceRequestRequest
 * \brief The CancelResourceRequestRequest class provides an interface for CloudControl CancelResourceRequest requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::cancelResourceRequest
 */

/*!
 * Constructs a copy of \a other.
 */
CancelResourceRequestRequest::CancelResourceRequestRequest(const CancelResourceRequestRequest &other)
    : CloudControlRequest(new CancelResourceRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelResourceRequestRequest object.
 */
CancelResourceRequestRequest::CancelResourceRequestRequest()
    : CloudControlRequest(new CancelResourceRequestRequestPrivate(CloudControlRequest::CancelResourceRequestAction, this))
{

}

/*!
 * \reimp
 */
bool CancelResourceRequestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelResourceRequestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelResourceRequestRequest::response(QNetworkReply * const reply) const
{
    return new CancelResourceRequestResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::CancelResourceRequestRequestPrivate
 * \brief The CancelResourceRequestRequestPrivate class provides private implementation for CancelResourceRequestRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CancelResourceRequestRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
CancelResourceRequestRequestPrivate::CancelResourceRequestRequestPrivate(
    const CloudControlRequest::Action action, CancelResourceRequestRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelResourceRequestRequest
 * class' copy constructor.
 */
CancelResourceRequestRequestPrivate::CancelResourceRequestRequestPrivate(
    const CancelResourceRequestRequestPrivate &other, CancelResourceRequestRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
