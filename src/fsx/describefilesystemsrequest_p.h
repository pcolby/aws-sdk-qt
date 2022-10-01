// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMSREQUEST_P_H
#define QTAWS_DESCRIBEFILESYSTEMSREQUEST_P_H

#include "fsxrequest_p.h"
#include "describefilesystemsrequest.h"

namespace QtAws {
namespace FSx {

class DescribeFileSystemsRequest;

class DescribeFileSystemsRequestPrivate : public FSxRequestPrivate {

public:
    DescribeFileSystemsRequestPrivate(const FSxRequest::Action action,
                                   DescribeFileSystemsRequest * const q);
    DescribeFileSystemsRequestPrivate(const DescribeFileSystemsRequestPrivate &other,
                                   DescribeFileSystemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
