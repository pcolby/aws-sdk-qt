// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESHAREDDIRECTORIESREQUEST_P_H
#define QTAWS_DESCRIBESHAREDDIRECTORIESREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describeshareddirectoriesrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSharedDirectoriesRequest;

class DescribeSharedDirectoriesRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeSharedDirectoriesRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeSharedDirectoriesRequest * const q);
    DescribeSharedDirectoriesRequestPrivate(const DescribeSharedDirectoriesRequestPrivate &other,
                                   DescribeSharedDirectoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSharedDirectoriesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
