// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEREQUEST_H
#define QTAWS_DESCRIBEPIPELINEREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribePipelineRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DescribePipelineRequest : public IoTAnalyticsRequest {

public:
    DescribePipelineRequest(const DescribePipelineRequest &other);
    DescribePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelineRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
