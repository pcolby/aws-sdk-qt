// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecertificatesrequest.h"
#include "describecertificatesrequest_p.h"
#include "describecertificatesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeCertificatesRequest
 * \brief The DescribeCertificatesRequest class provides an interface for DocDb DescribeCertificates requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest(const DescribeCertificatesRequest &other)
    : DocDbRequest(new DescribeCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCertificatesRequest object.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest()
    : DocDbRequest(new DescribeCertificatesRequestPrivate(DocDbRequest::DescribeCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeCertificatesRequestPrivate
 * \brief The DescribeCertificatesRequestPrivate class provides private implementation for DescribeCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeCertificatesRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DocDbRequest::Action action, DescribeCertificatesRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificatesRequest
 * class' copy constructor.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DescribeCertificatesRequestPrivate &other, DescribeCertificatesRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
