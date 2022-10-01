// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORIESREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTORIESREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describedirectoriesrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDirectoriesRequest;

class DescribeDirectoriesRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeDirectoriesRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeDirectoriesRequest * const q);
    DescribeDirectoriesRequestPrivate(const DescribeDirectoriesRequestPrivate &other,
                                   DescribeDirectoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectoriesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
