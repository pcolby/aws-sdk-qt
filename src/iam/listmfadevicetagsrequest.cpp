// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmfadevicetagsrequest.h"
#include "listmfadevicetagsrequest_p.h"
#include "listmfadevicetagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListMFADeviceTagsRequest
 * \brief The ListMFADeviceTagsRequest class provides an interface for Iam ListMFADeviceTags requests.
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
 * \sa IamClient::listMFADeviceTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListMFADeviceTagsRequest::ListMFADeviceTagsRequest(const ListMFADeviceTagsRequest &other)
    : IamRequest(new ListMFADeviceTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMFADeviceTagsRequest object.
 */
ListMFADeviceTagsRequest::ListMFADeviceTagsRequest()
    : IamRequest(new ListMFADeviceTagsRequestPrivate(IamRequest::ListMFADeviceTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMFADeviceTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMFADeviceTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMFADeviceTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListMFADeviceTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListMFADeviceTagsRequestPrivate
 * \brief The ListMFADeviceTagsRequestPrivate class provides private implementation for ListMFADeviceTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListMFADeviceTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListMFADeviceTagsRequestPrivate::ListMFADeviceTagsRequestPrivate(
    const IamRequest::Action action, ListMFADeviceTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMFADeviceTagsRequest
 * class' copy constructor.
 */
ListMFADeviceTagsRequestPrivate::ListMFADeviceTagsRequestPrivate(
    const ListMFADeviceTagsRequestPrivate &other, ListMFADeviceTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
