// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeconnectionaliaspermissionsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasPermissionsRequest;

class DescribeConnectionAliasPermissionsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeConnectionAliasPermissionsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeConnectionAliasPermissionsRequest * const q);
    DescribeConnectionAliasPermissionsRequestPrivate(const DescribeConnectionAliasPermissionsRequestPrivate &other,
                                   DescribeConnectionAliasPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionAliasPermissionsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
