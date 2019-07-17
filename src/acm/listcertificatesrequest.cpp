/*
    Copyright 2013-2019 Paul Colby

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

#include "listcertificatesrequest.h"
#include "listcertificatesrequest_p.h"
#include "listcertificatesresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ListCertificatesRequest
 * \brief The ListCertificatesRequest class provides an interface for ACM ListCertificates requests.
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
 *  about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
 *
 * \sa AcmClient::listCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
ListCertificatesRequest::ListCertificatesRequest(const ListCertificatesRequest &other)
    : AcmRequest(new ListCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCertificatesRequest object.
 */
ListCertificatesRequest::ListCertificatesRequest()
    : AcmRequest(new ListCertificatesRequestPrivate(AcmRequest::ListCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::ListCertificatesRequestPrivate
 * \brief The ListCertificatesRequestPrivate class provides private implementation for ListCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ListCertificatesRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
ListCertificatesRequestPrivate::ListCertificatesRequestPrivate(
    const AcmRequest::Action action, ListCertificatesRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCertificatesRequest
 * class' copy constructor.
 */
ListCertificatesRequestPrivate::ListCertificatesRequestPrivate(
    const ListCertificatesRequestPrivate &other, ListCertificatesRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
