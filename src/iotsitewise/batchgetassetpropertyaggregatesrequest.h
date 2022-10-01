// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYAGGREGATESREQUEST_H
#define QTAWS_BATCHGETASSETPROPERTYAGGREGATESREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyAggregatesRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT BatchGetAssetPropertyAggregatesRequest : public IoTSiteWiseRequest {

public:
    BatchGetAssetPropertyAggregatesRequest(const BatchGetAssetPropertyAggregatesRequest &other);
    BatchGetAssetPropertyAggregatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAssetPropertyAggregatesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
