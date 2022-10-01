// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULERESPONSE_H
#define QTAWS_DESCRIBERULERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "describerulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeRuleResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeRuleResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DescribeRuleResponse(const DescribeRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleResponse)
    Q_DISABLE_COPY(DescribeRuleResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
