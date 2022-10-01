// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualmfadevicesrequest.h"
#include "listvirtualmfadevicesrequest_p.h"
#include "listvirtualmfadevicesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListVirtualMFADevicesRequest
 * \brief The ListVirtualMFADevicesRequest class provides an interface for Iam ListVirtualMFADevices requests.
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
 * \sa IamClient::listVirtualMFADevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualMFADevicesRequest::ListVirtualMFADevicesRequest(const ListVirtualMFADevicesRequest &other)
    : IamRequest(new ListVirtualMFADevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualMFADevicesRequest object.
 */
ListVirtualMFADevicesRequest::ListVirtualMFADevicesRequest()
    : IamRequest(new ListVirtualMFADevicesRequestPrivate(IamRequest::ListVirtualMFADevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualMFADevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualMFADevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualMFADevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualMFADevicesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListVirtualMFADevicesRequestPrivate
 * \brief The ListVirtualMFADevicesRequestPrivate class provides private implementation for ListVirtualMFADevicesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListVirtualMFADevicesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListVirtualMFADevicesRequestPrivate::ListVirtualMFADevicesRequestPrivate(
    const IamRequest::Action action, ListVirtualMFADevicesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualMFADevicesRequest
 * class' copy constructor.
 */
ListVirtualMFADevicesRequestPrivate::ListVirtualMFADevicesRequestPrivate(
    const ListVirtualMFADevicesRequestPrivate &other, ListVirtualMFADevicesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
