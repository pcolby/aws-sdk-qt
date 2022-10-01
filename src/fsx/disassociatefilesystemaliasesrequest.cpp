// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatefilesystemaliasesrequest.h"
#include "disassociatefilesystemaliasesrequest_p.h"
#include "disassociatefilesystemaliasesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesRequest
 * \brief The DisassociateFileSystemAliasesRequest class provides an interface for FSx DisassociateFileSystemAliases requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::disassociateFileSystemAliases
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateFileSystemAliasesRequest::DisassociateFileSystemAliasesRequest(const DisassociateFileSystemAliasesRequest &other)
    : FSxRequest(new DisassociateFileSystemAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateFileSystemAliasesRequest object.
 */
DisassociateFileSystemAliasesRequest::DisassociateFileSystemAliasesRequest()
    : FSxRequest(new DisassociateFileSystemAliasesRequestPrivate(FSxRequest::DisassociateFileSystemAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateFileSystemAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateFileSystemAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateFileSystemAliasesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateFileSystemAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesRequestPrivate
 * \brief The DisassociateFileSystemAliasesRequestPrivate class provides private implementation for DisassociateFileSystemAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DisassociateFileSystemAliasesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DisassociateFileSystemAliasesRequestPrivate::DisassociateFileSystemAliasesRequestPrivate(
    const FSxRequest::Action action, DisassociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateFileSystemAliasesRequest
 * class' copy constructor.
 */
DisassociateFileSystemAliasesRequestPrivate::DisassociateFileSystemAliasesRequestPrivate(
    const DisassociateFileSystemAliasesRequestPrivate &other, DisassociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
