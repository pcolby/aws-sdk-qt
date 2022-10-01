// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEINSIGHTRULESRESPONSE_H
#define QTAWS_ENABLEINSIGHTRULESRESPONSE_H

#include "cloudwatchresponse.h"
#include "enableinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class EnableInsightRulesResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT EnableInsightRulesResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    EnableInsightRulesResponse(const EnableInsightRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableInsightRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableInsightRulesResponse)
    Q_DISABLE_COPY(EnableInsightRulesResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
