// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcertificatesrequest.h"
#include "listcertificatesrequest_p.h"
#include "listcertificatesresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ListCertificatesRequest
 * \brief The ListCertificatesRequest class provides an interface for Acm ListCertificates requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
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
 * \class QtAws::Acm::ListCertificatesRequestPrivate
 * \brief The ListCertificatesRequestPrivate class provides private implementation for ListCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
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

} // namespace Acm
} // namespace QtAws
