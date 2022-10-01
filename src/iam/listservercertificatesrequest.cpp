// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservercertificatesrequest.h"
#include "listservercertificatesrequest_p.h"
#include "listservercertificatesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListServerCertificatesRequest
 * \brief The ListServerCertificatesRequest class provides an interface for Iam ListServerCertificates requests.
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
 * \sa IamClient::listServerCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
ListServerCertificatesRequest::ListServerCertificatesRequest(const ListServerCertificatesRequest &other)
    : IamRequest(new ListServerCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServerCertificatesRequest object.
 */
ListServerCertificatesRequest::ListServerCertificatesRequest()
    : IamRequest(new ListServerCertificatesRequestPrivate(IamRequest::ListServerCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListServerCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServerCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServerCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListServerCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListServerCertificatesRequestPrivate
 * \brief The ListServerCertificatesRequestPrivate class provides private implementation for ListServerCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListServerCertificatesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListServerCertificatesRequestPrivate::ListServerCertificatesRequestPrivate(
    const IamRequest::Action action, ListServerCertificatesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServerCertificatesRequest
 * class' copy constructor.
 */
ListServerCertificatesRequestPrivate::ListServerCertificatesRequestPrivate(
    const ListServerCertificatesRequestPrivate &other, ListServerCertificatesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
