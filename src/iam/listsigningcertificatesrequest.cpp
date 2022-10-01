// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsigningcertificatesrequest.h"
#include "listsigningcertificatesrequest_p.h"
#include "listsigningcertificatesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSigningCertificatesRequest
 * \brief The ListSigningCertificatesRequest class provides an interface for Iam ListSigningCertificates requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listSigningCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
ListSigningCertificatesRequest::ListSigningCertificatesRequest(const ListSigningCertificatesRequest &other)
    : IamRequest(new ListSigningCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSigningCertificatesRequest object.
 */
ListSigningCertificatesRequest::ListSigningCertificatesRequest()
    : IamRequest(new ListSigningCertificatesRequestPrivate(IamRequest::ListSigningCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSigningCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSigningCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSigningCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListSigningCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListSigningCertificatesRequestPrivate
 * \brief The ListSigningCertificatesRequestPrivate class provides private implementation for ListSigningCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSigningCertificatesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListSigningCertificatesRequestPrivate::ListSigningCertificatesRequestPrivate(
    const IamRequest::Action action, ListSigningCertificatesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSigningCertificatesRequest
 * class' copy constructor.
 */
ListSigningCertificatesRequestPrivate::ListSigningCertificatesRequestPrivate(
    const ListSigningCertificatesRequestPrivate &other, ListSigningCertificatesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
