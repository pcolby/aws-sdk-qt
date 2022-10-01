// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASESREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONALIASESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeconnectionaliasesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasesRequest;

class DescribeConnectionAliasesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeConnectionAliasesRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeConnectionAliasesRequest * const q);
    DescribeConnectionAliasesRequestPrivate(const DescribeConnectionAliasesRequestPrivate &other,
                                   DescribeConnectionAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionAliasesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
