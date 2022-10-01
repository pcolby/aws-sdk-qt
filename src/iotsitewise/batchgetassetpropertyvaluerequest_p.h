// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUEREQUEST_P_H
#define QTAWS_BATCHGETASSETPROPERTYVALUEREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "batchgetassetpropertyvaluerequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueRequest;

class BatchGetAssetPropertyValueRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    BatchGetAssetPropertyValueRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   BatchGetAssetPropertyValueRequest * const q);
    BatchGetAssetPropertyValueRequestPrivate(const BatchGetAssetPropertyValueRequestPrivate &other,
                                   BatchGetAssetPropertyValueRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetAssetPropertyValueRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
