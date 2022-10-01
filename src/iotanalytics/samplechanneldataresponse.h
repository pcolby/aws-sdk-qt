// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAMPLECHANNELDATARESPONSE_H
#define QTAWS_SAMPLECHANNELDATARESPONSE_H

#include "iotanalyticsresponse.h"
#include "samplechanneldatarequest.h"

namespace QtAws {
namespace IoTAnalytics {

class SampleChannelDataResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT SampleChannelDataResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    SampleChannelDataResponse(const SampleChannelDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SampleChannelDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SampleChannelDataResponse)
    Q_DISABLE_COPY(SampleChannelDataResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
