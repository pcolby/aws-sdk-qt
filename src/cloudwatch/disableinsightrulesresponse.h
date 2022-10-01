// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEINSIGHTRULESRESPONSE_H
#define QTAWS_DISABLEINSIGHTRULESRESPONSE_H

#include "cloudwatchresponse.h"
#include "disableinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class DisableInsightRulesResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DisableInsightRulesResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DisableInsightRulesResponse(const DisableInsightRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableInsightRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableInsightRulesResponse)
    Q_DISABLE_COPY(DisableInsightRulesResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
