// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETREQUEST_P_H
#define QTAWS_DESCRIBEASSETREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describeassetrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetRequest;

class DescribeAssetRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeAssetRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeAssetRequest * const q);
    DescribeAssetRequestPrivate(const DescribeAssetRequestPrivate &other,
                                   DescribeAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssetRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
