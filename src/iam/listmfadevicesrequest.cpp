// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmfadevicesrequest.h"
#include "listmfadevicesrequest_p.h"
#include "listmfadevicesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListMFADevicesRequest
 * \brief The ListMFADevicesRequest class provides an interface for Iam ListMFADevices requests.
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
 * \sa IamClient::listMFADevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListMFADevicesRequest::ListMFADevicesRequest(const ListMFADevicesRequest &other)
    : IamRequest(new ListMFADevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMFADevicesRequest object.
 */
ListMFADevicesRequest::ListMFADevicesRequest()
    : IamRequest(new ListMFADevicesRequestPrivate(IamRequest::ListMFADevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMFADevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMFADevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMFADevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListMFADevicesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListMFADevicesRequestPrivate
 * \brief The ListMFADevicesRequestPrivate class provides private implementation for ListMFADevicesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListMFADevicesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListMFADevicesRequestPrivate::ListMFADevicesRequestPrivate(
    const IamRequest::Action action, ListMFADevicesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMFADevicesRequest
 * class' copy constructor.
 */
ListMFADevicesRequestPrivate::ListMFADevicesRequestPrivate(
    const ListMFADevicesRequestPrivate &other, ListMFADevicesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
