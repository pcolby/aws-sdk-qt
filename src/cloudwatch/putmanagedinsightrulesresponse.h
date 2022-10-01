// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDINSIGHTRULESRESPONSE_H
#define QTAWS_PUTMANAGEDINSIGHTRULESRESPONSE_H

#include "cloudwatchresponse.h"
#include "putmanagedinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutManagedInsightRulesResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutManagedInsightRulesResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutManagedInsightRulesResponse(const PutManagedInsightRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutManagedInsightRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutManagedInsightRulesResponse)
    Q_DISABLE_COPY(PutManagedInsightRulesResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
