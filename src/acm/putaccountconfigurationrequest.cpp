// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountconfigurationrequest.h"
#include "putaccountconfigurationrequest_p.h"
#include "putaccountconfigurationresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::PutAccountConfigurationRequest
 * \brief The PutAccountConfigurationRequest class provides an interface for Acm PutAccountConfiguration requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::putAccountConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountConfigurationRequest::PutAccountConfigurationRequest(const PutAccountConfigurationRequest &other)
    : AcmRequest(new PutAccountConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountConfigurationRequest object.
 */
PutAccountConfigurationRequest::PutAccountConfigurationRequest()
    : AcmRequest(new PutAccountConfigurationRequestPrivate(AcmRequest::PutAccountConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::PutAccountConfigurationRequestPrivate
 * \brief The PutAccountConfigurationRequestPrivate class provides private implementation for PutAccountConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a PutAccountConfigurationRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
PutAccountConfigurationRequestPrivate::PutAccountConfigurationRequestPrivate(
    const AcmRequest::Action action, PutAccountConfigurationRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountConfigurationRequest
 * class' copy constructor.
 */
PutAccountConfigurationRequestPrivate::PutAccountConfigurationRequestPrivate(
    const PutAccountConfigurationRequestPrivate &other, PutAccountConfigurationRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
