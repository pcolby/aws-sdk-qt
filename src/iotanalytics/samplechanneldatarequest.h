// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAMPLECHANNELDATAREQUEST_H
#define QTAWS_SAMPLECHANNELDATAREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class SampleChannelDataRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT SampleChannelDataRequest : public IoTAnalyticsRequest {

public:
    SampleChannelDataRequest(const SampleChannelDataRequest &other);
    SampleChannelDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SampleChannelDataRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
