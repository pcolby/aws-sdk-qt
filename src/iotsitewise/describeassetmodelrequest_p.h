// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETMODELREQUEST_P_H
#define QTAWS_DESCRIBEASSETMODELREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describeassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetModelRequest;

class DescribeAssetModelRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeAssetModelRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeAssetModelRequest * const q);
    DescribeAssetModelRequestPrivate(const DescribeAssetModelRequestPrivate &other,
                                   DescribeAssetModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssetModelRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
