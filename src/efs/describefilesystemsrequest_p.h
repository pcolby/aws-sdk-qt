// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMSREQUEST_P_H
#define QTAWS_DESCRIBEFILESYSTEMSREQUEST_P_H

#include "efsrequest_p.h"
#include "describefilesystemsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemsRequest;

class DescribeFileSystemsRequestPrivate : public EfsRequestPrivate {

public:
    DescribeFileSystemsRequestPrivate(const EfsRequest::Action action,
                                   DescribeFileSystemsRequest * const q);
    DescribeFileSystemsRequestPrivate(const DescribeFileSystemsRequestPrivate &other,
                                   DescribeFileSystemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
