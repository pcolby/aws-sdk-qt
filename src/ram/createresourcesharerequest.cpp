// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcesharerequest.h"
#include "createresourcesharerequest_p.h"
#include "createresourceshareresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::CreateResourceShareRequest
 * \brief The CreateResourceShareRequest class provides an interface for Ram CreateResourceShare requests.
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
 * \sa RamClient::createResourceShare
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceShareRequest::CreateResourceShareRequest(const CreateResourceShareRequest &other)
    : RamRequest(new CreateResourceShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceShareRequest object.
 */
CreateResourceShareRequest::CreateResourceShareRequest()
    : RamRequest(new CreateResourceShareRequestPrivate(RamRequest::CreateResourceShareAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceShareRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceShareResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::CreateResourceShareRequestPrivate
 * \brief The CreateResourceShareRequestPrivate class provides private implementation for CreateResourceShareRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a CreateResourceShareRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
CreateResourceShareRequestPrivate::CreateResourceShareRequestPrivate(
    const RamRequest::Action action, CreateResourceShareRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceShareRequest
 * class' copy constructor.
 */
CreateResourceShareRequestPrivate::CreateResourceShareRequestPrivate(
    const CreateResourceShareRequestPrivate &other, CreateResourceShareRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
