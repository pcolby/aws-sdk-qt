// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYREQUEST_H
#define QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueHistoryRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT BatchGetAssetPropertyValueHistoryRequest : public IoTSiteWiseRequest {

public:
    BatchGetAssetPropertyValueHistoryRequest(const BatchGetAssetPropertyValueHistoryRequest &other);
    BatchGetAssetPropertyValueHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAssetPropertyValueHistoryRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
