// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountconfigurationrequest.h"
#include "getaccountconfigurationrequest_p.h"
#include "getaccountconfigurationresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::GetAccountConfigurationRequest
 * \brief The GetAccountConfigurationRequest class provides an interface for Acm GetAccountConfiguration requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
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
 * \class QtAws::Acm::GetAccountConfigurationRequestPrivate
 * \brief The GetAccountConfigurationRequestPrivate class provides private implementation for GetAccountConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
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

} // namespace Acm
} // namespace QtAws
