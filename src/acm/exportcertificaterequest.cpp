/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
 *
 * \sa ACMClient::exportCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
ExportCertificateRequest::ExportCertificateRequest(const ExportCertificateRequest &other)
    : ACMRequest(new ExportCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportCertificateRequest object.
 */
ExportCertificateRequest::ExportCertificateRequest()
    : ACMRequest(new ExportCertificateRequestPrivate(ACMRequest::ExportCertificateAction, this))
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
 *
 * Constructs a ExportCertificateRequestPrivate object for ACM \a action with,
 * public implementation \a q.
 */
ExportCertificateRequestPrivate::ExportCertificateRequestPrivate(
    const ACMRequest::Action action, ExportCertificateRequest * const q)
    : ACMRequestPrivate(action, q)
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
    : ACMRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
