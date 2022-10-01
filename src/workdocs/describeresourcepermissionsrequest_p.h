// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBERESOURCEPERMISSIONSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describeresourcepermissionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeResourcePermissionsRequest;

class DescribeResourcePermissionsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeResourcePermissionsRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeResourcePermissionsRequest * const q);
    DescribeResourcePermissionsRequestPrivate(const DescribeResourcePermissionsRequestPrivate &other,
                                   DescribeResourcePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePermissionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
