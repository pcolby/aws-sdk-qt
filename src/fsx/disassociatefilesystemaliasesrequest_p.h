// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMALIASESREQUEST_P_H
#define QTAWS_DISASSOCIATEFILESYSTEMALIASESREQUEST_P_H

#include "fsxrequest_p.h"
#include "disassociatefilesystemaliasesrequest.h"

namespace QtAws {
namespace FSx {

class DisassociateFileSystemAliasesRequest;

class DisassociateFileSystemAliasesRequestPrivate : public FSxRequestPrivate {

public:
    DisassociateFileSystemAliasesRequestPrivate(const FSxRequest::Action action,
                                   DisassociateFileSystemAliasesRequest * const q);
    DisassociateFileSystemAliasesRequestPrivate(const DisassociateFileSystemAliasesRequestPrivate &other,
                                   DisassociateFileSystemAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFileSystemAliasesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
