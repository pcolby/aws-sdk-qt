// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONDITIONALFORWARDERSREQUEST_P_H
#define QTAWS_DESCRIBECONDITIONALFORWARDERSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describeconditionalforwardersrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeConditionalForwardersRequest;

class DescribeConditionalForwardersRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeConditionalForwardersRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeConditionalForwardersRequest * const q);
    DescribeConditionalForwardersRequestPrivate(const DescribeConditionalForwardersRequestPrivate &other,
                                   DescribeConditionalForwardersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConditionalForwardersRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
