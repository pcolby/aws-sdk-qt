// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYAGGREGATESREQUEST_P_H
#define QTAWS_BATCHGETASSETPROPERTYAGGREGATESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "batchgetassetpropertyaggregatesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyAggregatesRequest;

class BatchGetAssetPropertyAggregatesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    BatchGetAssetPropertyAggregatesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   BatchGetAssetPropertyAggregatesRequest * const q);
    BatchGetAssetPropertyAggregatesRequestPrivate(const BatchGetAssetPropertyAggregatesRequestPrivate &other,
                                   BatchGetAssetPropertyAggregatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetAssetPropertyAggregatesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
