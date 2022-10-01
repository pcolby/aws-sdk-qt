// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTOPICSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTTOPICSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describeeventtopicsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeEventTopicsRequest;

class DescribeEventTopicsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeEventTopicsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeEventTopicsRequest * const q);
    DescribeEventTopicsRequestPrivate(const DescribeEventTopicsRequestPrivate &other,
                                   DescribeEventTopicsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventTopicsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
