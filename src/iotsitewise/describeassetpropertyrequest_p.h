// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETPROPERTYREQUEST_P_H
#define QTAWS_DESCRIBEASSETPROPERTYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describeassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetPropertyRequest;

class DescribeAssetPropertyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeAssetPropertyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeAssetPropertyRequest * const q);
    DescribeAssetPropertyRequestPrivate(const DescribeAssetPropertyRequestPrivate &other,
                                   DescribeAssetPropertyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
