// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservercertificatetagsrequest.h"
#include "listservercertificatetagsrequest_p.h"
#include "listservercertificatetagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListServerCertificateTagsRequest
 * \brief The ListServerCertificateTagsRequest class provides an interface for Iam ListServerCertificateTags requests.
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
 * \sa IamClient::listServerCertificateTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListServerCertificateTagsRequest::ListServerCertificateTagsRequest(const ListServerCertificateTagsRequest &other)
    : IamRequest(new ListServerCertificateTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServerCertificateTagsRequest object.
 */
ListServerCertificateTagsRequest::ListServerCertificateTagsRequest()
    : IamRequest(new ListServerCertificateTagsRequestPrivate(IamRequest::ListServerCertificateTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListServerCertificateTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServerCertificateTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServerCertificateTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListServerCertificateTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListServerCertificateTagsRequestPrivate
 * \brief The ListServerCertificateTagsRequestPrivate class provides private implementation for ListServerCertificateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListServerCertificateTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListServerCertificateTagsRequestPrivate::ListServerCertificateTagsRequestPrivate(
    const IamRequest::Action action, ListServerCertificateTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServerCertificateTagsRequest
 * class' copy constructor.
 */
ListServerCertificateTagsRequestPrivate::ListServerCertificateTagsRequestPrivate(
    const ListServerCertificateTagsRequestPrivate &other, ListServerCertificateTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
