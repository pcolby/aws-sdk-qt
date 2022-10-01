// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTMESSAGEREQUEST_H
#define QTAWS_BATCHPUTMESSAGEREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class BatchPutMessageRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT BatchPutMessageRequest : public IoTAnalyticsRequest {

public:
    BatchPutMessageRequest(const BatchPutMessageRequest &other);
    BatchPutMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutMessageRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
