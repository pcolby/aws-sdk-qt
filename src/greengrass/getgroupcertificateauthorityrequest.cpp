// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
