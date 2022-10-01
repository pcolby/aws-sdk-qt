// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTASSETPROPERTYVALUEREQUEST_P_H
#define QTAWS_BATCHPUTASSETPROPERTYVALUEREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "batchputassetpropertyvaluerequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchPutAssetPropertyValueRequest;

class BatchPutAssetPropertyValueRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    BatchPutAssetPropertyValueRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   BatchPutAssetPropertyValueRequest * const q);
    BatchPutAssetPropertyValueRequestPrivate(const BatchPutAssetPropertyValueRequestPrivate &other,
                                   BatchPutAssetPropertyValueRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutAssetPropertyValueRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
