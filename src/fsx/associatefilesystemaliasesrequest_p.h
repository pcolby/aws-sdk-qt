// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMALIASESREQUEST_P_H
#define QTAWS_ASSOCIATEFILESYSTEMALIASESREQUEST_P_H

#include "fsxrequest_p.h"
#include "associatefilesystemaliasesrequest.h"

namespace QtAws {
namespace FSx {

class AssociateFileSystemAliasesRequest;

class AssociateFileSystemAliasesRequestPrivate : public FSxRequestPrivate {

public:
    AssociateFileSystemAliasesRequestPrivate(const FSxRequest::Action action,
                                   AssociateFileSystemAliasesRequest * const q);
    AssociateFileSystemAliasesRequestPrivate(const AssociateFileSystemAliasesRequestPrivate &other,
                                   AssociateFileSystemAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateFileSystemAliasesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
