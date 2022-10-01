// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULERESPONSE_H
#define QTAWS_PUTRULERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "putrulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutRuleResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutRuleResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    PutRuleResponse(const PutRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRuleResponse)
    Q_DISABLE_COPY(PutRuleResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
