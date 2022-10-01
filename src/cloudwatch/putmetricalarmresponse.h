// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICALARMRESPONSE_H
#define QTAWS_PUTMETRICALARMRESPONSE_H

#include "cloudwatchresponse.h"
#include "putmetricalarmrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricAlarmResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutMetricAlarmResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutMetricAlarmResponse(const PutMetricAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetricAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricAlarmResponse)
    Q_DISABLE_COPY(PutMetricAlarmResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
