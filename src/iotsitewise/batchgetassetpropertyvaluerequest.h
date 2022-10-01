// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUEREQUEST_H
#define QTAWS_BATCHGETASSETPROPERTYVALUEREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT BatchGetAssetPropertyValueRequest : public IoTSiteWiseRequest {

public:
    BatchGetAssetPropertyValueRequest(const BatchGetAssetPropertyValueRequest &other);
    BatchGetAssetPropertyValueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAssetPropertyValueRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
