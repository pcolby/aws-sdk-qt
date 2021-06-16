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

#include "getconfigrequest.h"
#include "getconfigrequest_p.h"
#include "getconfigresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::GetConfigRequest
 * \brief The GetConfigRequest class provides an interface for CloudHSM GetConfig requests.
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
 * \sa CloudHSMClient::getConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigRequest::GetConfigRequest(const GetConfigRequest &other)
    : CloudHSMRequest(new GetConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigRequest object.
 */
GetConfigRequest::GetConfigRequest()
    : CloudHSMRequest(new GetConfigRequestPrivate(CloudHSMRequest::GetConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSM::GetConfigRequestPrivate
 * \brief The GetConfigRequestPrivate class provides private implementation for GetConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a GetConfigRequestPrivate object for CloudHSM \a action,
 * with public implementation \a q.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const CloudHSMRequest::Action action, GetConfigRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigRequest
 * class' copy constructor.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const GetConfigRequestPrivate &other, GetConfigRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
