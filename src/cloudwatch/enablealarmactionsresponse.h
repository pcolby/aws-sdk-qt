// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALARMACTIONSRESPONSE_H
#define QTAWS_ENABLEALARMACTIONSRESPONSE_H

#include "cloudwatchresponse.h"
#include "enablealarmactionsrequest.h"

namespace QtAws {
namespace CloudWatch {

class EnableAlarmActionsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT EnableAlarmActionsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    EnableAlarmActionsResponse(const EnableAlarmActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAlarmActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAlarmActionsResponse)
    Q_DISABLE_COPY(EnableAlarmActionsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
