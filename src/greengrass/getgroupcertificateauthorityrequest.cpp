/*
    Copyright 2013-2019 Paul Colby

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

#include "getgroupcertificateauthorityrequest.h"
#include "getgroupcertificateauthorityrequest_p.h"
#include "getgroupcertificateauthorityresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupCertificateAuthorityRequest
 * \brief The GetGroupCertificateAuthorityRequest class provides an interface for Greengrass GetGroupCertificateAuthority requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroupCertificateAuthority
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupCertificateAuthorityRequest::GetGroupCertificateAuthorityRequest(const GetGroupCertificateAuthorityRequest &other)
    : GreengrassRequest(new GetGroupCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupCertificateAuthorityRequest object.
 */
GetGroupCertificateAuthorityRequest::GetGroupCertificateAuthorityRequest()
    : GreengrassRequest(new GetGroupCertificateAuthorityRequestPrivate(GreengrassRequest::GetGroupCertificateAuthorityAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupCertificateAuthorityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupCertificateAuthorityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupCertificateAuthorityResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetGroupCertificateAuthorityRequestPrivate
 * \brief The GetGroupCertificateAuthorityRequestPrivate class provides private implementation for GetGroupCertificateAuthorityRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupCertificateAuthorityRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetGroupCertificateAuthorityRequestPrivate::GetGroupCertificateAuthorityRequestPrivate(
    const GreengrassRequest::Action action, GetGroupCertificateAuthorityRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupCertificateAuthorityRequest
 * class' copy constructor.
 */
GetGroupCertificateAuthorityRequestPrivate::GetGroupCertificateAuthorityRequestPrivate(
    const GetGroupCertificateAuthorityRequestPrivate &other, GetGroupCertificateAuthorityRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
