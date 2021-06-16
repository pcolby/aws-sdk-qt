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

#include "getaccountconfigurationrequest.h"
#include "getaccountconfigurationrequest_p.h"
#include "getaccountconfigurationresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::GetAccountConfigurationRequest
 * \brief The GetAccountConfigurationRequest class provides an interface for ACM GetAccountConfiguration requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
 *
 * \sa AcmClient::getAccountConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountConfigurationRequest::GetAccountConfigurationRequest(const GetAccountConfigurationRequest &other)
    : AcmRequest(new GetAccountConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountConfigurationRequest object.
 */
GetAccountConfigurationRequest::GetAccountConfigurationRequest()
    : AcmRequest(new GetAccountConfigurationRequestPrivate(AcmRequest::GetAccountConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::GetAccountConfigurationRequestPrivate
 * \brief The GetAccountConfigurationRequestPrivate class provides private implementation for GetAccountConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a GetAccountConfigurationRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
GetAccountConfigurationRequestPrivate::GetAccountConfigurationRequestPrivate(
    const AcmRequest::Action action, GetAccountConfigurationRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountConfigurationRequest
 * class' copy constructor.
 */
GetAccountConfigurationRequestPrivate::GetAccountConfigurationRequestPrivate(
    const GetAccountConfigurationRequestPrivate &other, GetAccountConfigurationRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
