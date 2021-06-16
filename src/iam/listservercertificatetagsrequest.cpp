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

#include "listservercertificatetagsrequest.h"
#include "listservercertificatetagsrequest_p.h"
#include "listservercertificatetagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListServerCertificateTagsRequest
 * \brief The ListServerCertificateTagsRequest class provides an interface for IAM ListServerCertificateTags requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
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
 * \class QtAws::IAM::ListServerCertificateTagsRequestPrivate
 * \brief The ListServerCertificateTagsRequestPrivate class provides private implementation for ListServerCertificateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
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

} // namespace IAM
} // namespace QtAws
