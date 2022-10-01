// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSREQUEST_P_H
#define QTAWS_DESCRIBEREGIONSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describeregionsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeRegionsRequest;

class DescribeRegionsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeRegionsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeRegionsRequest * const q);
    DescribeRegionsRequestPrivate(const DescribeRegionsRequestPrivate &other,
                                   DescribeRegionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRegionsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
