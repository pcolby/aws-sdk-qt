// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTANALYTICSRESPONSE_H
#define QTAWS_IOTANALYTICSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotanalyticsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT IoTAnalyticsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTAnalyticsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTAnalyticsResponse(IoTAnalyticsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTAnalyticsResponse)
    Q_DISABLE_COPY(IoTAnalyticsResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
