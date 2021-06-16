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

#include "putaccountconfigurationrequest.h"
#include "putaccountconfigurationrequest_p.h"
#include "putaccountconfigurationresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::PutAccountConfigurationRequest
 * \brief The PutAccountConfigurationRequest class provides an interface for ACM PutAccountConfiguration requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
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
 * \class QtAws::ACM::PutAccountConfigurationRequestPrivate
 * \brief The PutAccountConfigurationRequestPrivate class provides private implementation for PutAccountConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsACM
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

} // namespace ACM
} // namespace QtAws
