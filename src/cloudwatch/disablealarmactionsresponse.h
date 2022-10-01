// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEALARMACTIONSRESPONSE_H
#define QTAWS_DISABLEALARMACTIONSRESPONSE_H

#include "cloudwatchresponse.h"
#include "disablealarmactionsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DisableAlarmActionsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DisableAlarmActionsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DisableAlarmActionsResponse(const DisableAlarmActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableAlarmActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAlarmActionsResponse)
    Q_DISABLE_COPY(DisableAlarmActionsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
