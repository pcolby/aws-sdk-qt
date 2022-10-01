// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcesharerequest.h"
#include "deleteresourcesharerequest_p.h"
#include "deleteresourceshareresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::DeleteResourceShareRequest
 * \brief The DeleteResourceShareRequest class provides an interface for Ram DeleteResourceShare requests.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::deleteResourceShare
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceShareRequest::DeleteResourceShareRequest(const DeleteResourceShareRequest &other)
    : RamRequest(new DeleteResourceShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceShareRequest object.
 */
DeleteResourceShareRequest::DeleteResourceShareRequest()
    : RamRequest(new DeleteResourceShareRequestPrivate(RamRequest::DeleteResourceShareAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceShareRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceShareResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::DeleteResourceShareRequestPrivate
 * \brief The DeleteResourceShareRequestPrivate class provides private implementation for DeleteResourceShareRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a DeleteResourceShareRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
DeleteResourceShareRequestPrivate::DeleteResourceShareRequestPrivate(
    const RamRequest::Action action, DeleteResourceShareRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceShareRequest
 * class' copy constructor.
 */
DeleteResourceShareRequestPrivate::DeleteResourceShareRequestPrivate(
    const DeleteResourceShareRequestPrivate &other, DeleteResourceShareRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
