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

#include "importcertificateauthoritycertificaterequest.h"
#include "importcertificateauthoritycertificaterequest_p.h"
#include "importcertificateauthoritycertificateresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::ImportCertificateAuthorityCertificateRequest
 * \brief The ImportCertificateAuthorityCertificateRequest class provides an interface for ACMPCA ImportCertificateAuthorityCertificate requests.
 *
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a throttling limit which determines the number of times the action can be called per
 *  second. For more information, see <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API Rate Limits in ACM Private
 *  CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::importCertificateAuthorityCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
ImportCertificateAuthorityCertificateRequest::ImportCertificateAuthorityCertificateRequest(const ImportCertificateAuthorityCertificateRequest &other)
    : AcmpcaRequest(new ImportCertificateAuthorityCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportCertificateAuthorityCertificateRequest object.
 */
ImportCertificateAuthorityCertificateRequest::ImportCertificateAuthorityCertificateRequest()
    : AcmpcaRequest(new ImportCertificateAuthorityCertificateRequestPrivate(AcmpcaRequest::ImportCertificateAuthorityCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool ImportCertificateAuthorityCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportCertificateAuthorityCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportCertificateAuthorityCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ImportCertificateAuthorityCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ACMPCA::ImportCertificateAuthorityCertificateRequestPrivate
 * \brief The ImportCertificateAuthorityCertificateRequestPrivate class provides private implementation for ImportCertificateAuthorityCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a ImportCertificateAuthorityCertificateRequestPrivate object for Acmpca \a action,
 * with public implementation \a q.
 */
ImportCertificateAuthorityCertificateRequestPrivate::ImportCertificateAuthorityCertificateRequestPrivate(
    const AcmpcaRequest::Action action, ImportCertificateAuthorityCertificateRequest * const q)
    : AcmpcaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportCertificateAuthorityCertificateRequest
 * class' copy constructor.
 */
ImportCertificateAuthorityCertificateRequestPrivate::ImportCertificateAuthorityCertificateRequestPrivate(
    const ImportCertificateAuthorityCertificateRequestPrivate &other, ImportCertificateAuthorityCertificateRequest * const q)
    : AcmpcaRequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
