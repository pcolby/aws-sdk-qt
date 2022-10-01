// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTRULERESPONSE_H
#define QTAWS_PUTINSIGHTRULERESPONSE_H

#include "cloudwatchresponse.h"
#include "putinsightrulerequest.h"

namespace QtAws {
namespace CloudWatch {

class PutInsightRuleResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutInsightRuleResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutInsightRuleResponse(const PutInsightRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInsightRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInsightRuleResponse)
    Q_DISABLE_COPY(PutInsightRuleResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
