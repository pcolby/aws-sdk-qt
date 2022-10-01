// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTRULESRESPONSE_H
#define QTAWS_DELETEINSIGHTRULESRESPONSE_H

#include "cloudwatchresponse.h"
#include "deleteinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteInsightRulesResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteInsightRulesResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DeleteInsightRulesResponse(const DeleteInsightRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInsightRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInsightRulesResponse)
    Q_DISABLE_COPY(DeleteInsightRulesResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
