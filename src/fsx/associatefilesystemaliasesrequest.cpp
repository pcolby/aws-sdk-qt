// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatefilesystemaliasesrequest.h"
#include "associatefilesystemaliasesrequest_p.h"
#include "associatefilesystemaliasesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesRequest
 * \brief The AssociateFileSystemAliasesRequest class provides an interface for FSx AssociateFileSystemAliases requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::associateFileSystemAliases
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateFileSystemAliasesRequest::AssociateFileSystemAliasesRequest(const AssociateFileSystemAliasesRequest &other)
    : FSxRequest(new AssociateFileSystemAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateFileSystemAliasesRequest object.
 */
AssociateFileSystemAliasesRequest::AssociateFileSystemAliasesRequest()
    : FSxRequest(new AssociateFileSystemAliasesRequestPrivate(FSxRequest::AssociateFileSystemAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateFileSystemAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateFileSystemAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateFileSystemAliasesRequest::response(QNetworkReply * const reply) const
{
    return new AssociateFileSystemAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesRequestPrivate
 * \brief The AssociateFileSystemAliasesRequestPrivate class provides private implementation for AssociateFileSystemAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a AssociateFileSystemAliasesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
AssociateFileSystemAliasesRequestPrivate::AssociateFileSystemAliasesRequestPrivate(
    const FSxRequest::Action action, AssociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateFileSystemAliasesRequest
 * class' copy constructor.
 */
AssociateFileSystemAliasesRequestPrivate::AssociateFileSystemAliasesRequestPrivate(
    const AssociateFileSystemAliasesRequestPrivate &other, AssociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
