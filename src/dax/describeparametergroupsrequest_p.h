// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEPARAMETERGROUPSREQUEST_P_H

#include "daxrequest_p.h"
#include "describeparametergroupsrequest.h"

namespace QtAws {
namespace Dax {

class DescribeParameterGroupsRequest;

class DescribeParameterGroupsRequestPrivate : public DaxRequestPrivate {

public:
    DescribeParameterGroupsRequestPrivate(const DaxRequest::Action action,
                                   DescribeParameterGroupsRequest * const q);
    DescribeParameterGroupsRequestPrivate(const DescribeParameterGroupsRequestPrivate &other,
                                   DescribeParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeParameterGroupsRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
