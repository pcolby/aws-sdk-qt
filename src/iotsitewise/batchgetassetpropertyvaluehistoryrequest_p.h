// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYREQUEST_P_H
#define QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "batchgetassetpropertyvaluehistoryrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueHistoryRequest;

class BatchGetAssetPropertyValueHistoryRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    BatchGetAssetPropertyValueHistoryRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   BatchGetAssetPropertyValueHistoryRequest * const q);
    BatchGetAssetPropertyValueHistoryRequestPrivate(const BatchGetAssetPropertyValueHistoryRequestPrivate &other,
                                   BatchGetAssetPropertyValueHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetAssetPropertyValueHistoryRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
