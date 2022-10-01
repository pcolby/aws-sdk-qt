// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOMEREGIONCONTROLSREQUEST_P_H
#define QTAWS_DESCRIBEHOMEREGIONCONTROLSREQUEST_P_H

#include "migrationhubconfigrequest_p.h"
#include "describehomeregioncontrolsrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class DescribeHomeRegionControlsRequest;

class DescribeHomeRegionControlsRequestPrivate : public MigrationHubConfigRequestPrivate {

public:
    DescribeHomeRegionControlsRequestPrivate(const MigrationHubConfigRequest::Action action,
                                   DescribeHomeRegionControlsRequest * const q);
    DescribeHomeRegionControlsRequestPrivate(const DescribeHomeRegionControlsRequestPrivate &other,
                                   DescribeHomeRegionControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHomeRegionControlsRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
