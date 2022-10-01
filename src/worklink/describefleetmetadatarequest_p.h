// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETADATAREQUEST_P_H
#define QTAWS_DESCRIBEFLEETMETADATAREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describefleetmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeFleetMetadataRequest;

class DescribeFleetMetadataRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeFleetMetadataRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeFleetMetadataRequest * const q);
    DescribeFleetMetadataRequestPrivate(const DescribeFleetMetadataRequestPrivate &other,
                                   DescribeFleetMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetMetadataRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
