// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGOPTIONSREQUEST_H
#define QTAWS_PUTLOGGINGOPTIONSREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class PutLoggingOptionsRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT PutLoggingOptionsRequest : public IoTAnalyticsRequest {

public:
    PutLoggingOptionsRequest(const PutLoggingOptionsRequest &other);
    PutLoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingOptionsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
