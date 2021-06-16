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

#include "creategroupcertificateauthorityrequest.h"
#include "creategroupcertificateauthorityrequest_p.h"
#include "creategroupcertificateauthorityresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateGroupCertificateAuthorityRequest
 * \brief The CreateGroupCertificateAuthorityRequest class provides an interface for Greengrass CreateGroupCertificateAuthority requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createGroupCertificateAuthority
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupCertificateAuthorityRequest::CreateGroupCertificateAuthorityRequest(const CreateGroupCertificateAuthorityRequest &other)
    : GreengrassRequest(new CreateGroupCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupCertificateAuthorityRequest object.
 */
CreateGroupCertificateAuthorityRequest::CreateGroupCertificateAuthorityRequest()
    : GreengrassRequest(new CreateGroupCertificateAuthorityRequestPrivate(GreengrassRequest::CreateGroupCertificateAuthorityAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupCertificateAuthorityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupCertificateAuthorityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupCertificateAuthorityResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateGroupCertificateAuthorityRequestPrivate
 * \brief The CreateGroupCertificateAuthorityRequestPrivate class provides private implementation for CreateGroupCertificateAuthorityRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateGroupCertificateAuthorityRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateGroupCertificateAuthorityRequestPrivate::CreateGroupCertificateAuthorityRequestPrivate(
    const GreengrassRequest::Action action, CreateGroupCertificateAuthorityRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupCertificateAuthorityRequest
 * class' copy constructor.
 */
CreateGroupCertificateAuthorityRequestPrivate::CreateGroupCertificateAuthorityRequestPrivate(
    const CreateGroupCertificateAuthorityRequestPrivate &other, CreateGroupCertificateAuthorityRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
