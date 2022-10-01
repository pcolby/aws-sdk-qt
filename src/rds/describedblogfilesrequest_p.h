// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBLOGFILESREQUEST_P_H
#define QTAWS_DESCRIBEDBLOGFILESREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedblogfilesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBLogFilesRequest;

class DescribeDBLogFilesRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBLogFilesRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBLogFilesRequest * const q);
    DescribeDBLogFilesRequestPrivate(const DescribeDBLogFilesRequestPrivate &other,
                                   DescribeDBLogFilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBLogFilesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
