// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERULERESPONSE_H
#define QTAWS_ENABLERULERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "enablerulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class EnableRuleResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT EnableRuleResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    EnableRuleResponse(const EnableRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableRuleResponse)
    Q_DISABLE_COPY(EnableRuleResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
