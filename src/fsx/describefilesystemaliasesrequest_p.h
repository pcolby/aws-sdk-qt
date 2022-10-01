// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMALIASESREQUEST_P_H
#define QTAWS_DESCRIBEFILESYSTEMALIASESREQUEST_P_H

#include "fsxrequest_p.h"
#include "describefilesystemaliasesrequest.h"

namespace QtAws {
namespace FSx {

class DescribeFileSystemAliasesRequest;

class DescribeFileSystemAliasesRequestPrivate : public FSxRequestPrivate {

public:
    DescribeFileSystemAliasesRequestPrivate(const FSxRequest::Action action,
                                   DescribeFileSystemAliasesRequest * const q);
    DescribeFileSystemAliasesRequestPrivate(const DescribeFileSystemAliasesRequestPrivate &other,
                                   DescribeFileSystemAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemAliasesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
