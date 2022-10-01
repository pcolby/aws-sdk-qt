// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTASSETPROPERTYVALUEREQUEST_H
#define QTAWS_BATCHPUTASSETPROPERTYVALUEREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchPutAssetPropertyValueRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT BatchPutAssetPropertyValueRequest : public IoTSiteWiseRequest {

public:
    BatchPutAssetPropertyValueRequest(const BatchPutAssetPropertyValueRequest &other);
    BatchPutAssetPropertyValueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutAssetPropertyValueRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
