// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportcertificaterequest.h"
#include "exportcertificaterequest_p.h"
#include "exportcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ExportCertificateRequest
 * \brief The ExportCertificateRequest class provides an interface for Acm ExportCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
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
 * \class QtAws::Acm::ExportCertificateRequestPrivate
 * \brief The ExportCertificateRequestPrivate class provides private implementation for ExportCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
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

} // namespace Acm
} // namespace QtAws
