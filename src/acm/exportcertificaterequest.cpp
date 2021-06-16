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

#include "exportcertificaterequest.h"
#include "exportcertificaterequest_p.h"
#include "exportcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ExportCertificateRequest
 * \brief The ExportCertificateRequest class provides an interface for ACM ExportCertificate requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
 *
 * \sa AcmClient::exportCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
ExportCertificateRequest::ExportCertificateRequest(const ExportCertificateRequest &other)
    : AcmRequest(new ExportCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportCertificateRequest object.
 */
ExportCertificateRequest::ExportCertificateRequest()
    : AcmRequest(new ExportCertificateRequestPrivate(AcmRequest::ExportCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool ExportCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ExportCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::ExportCertificateRequestPrivate
 * \brief The ExportCertificateRequestPrivate class provides private implementation for ExportCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ExportCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
ExportCertificateRequestPrivate::ExportCertificateRequestPrivate(
    const AcmRequest::Action action, ExportCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportCertificateRequest
 * class' copy constructor.
 */
ExportCertificateRequestPrivate::ExportCertificateRequestPrivate(
    const ExportCertificateRequestPrivate &other, ExportCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
