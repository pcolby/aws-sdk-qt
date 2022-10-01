// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERULERESPONSE_H
#define QTAWS_DISABLERULERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "disablerulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DisableRuleResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DisableRuleResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DisableRuleResponse(const DisableRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableRuleResponse)
    Q_DISABLE_COPY(DisableRuleResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
