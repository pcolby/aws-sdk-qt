// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETALARMSTATERESPONSE_H
#define QTAWS_SETALARMSTATERESPONSE_H

#include "cloudwatchresponse.h"
#include "setalarmstaterequest.h"

namespace QtAws {
namespace CloudWatch {

class SetAlarmStateResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT SetAlarmStateResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    SetAlarmStateResponse(const SetAlarmStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetAlarmStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetAlarmStateResponse)
    Q_DISABLE_COPY(SetAlarmStateResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
