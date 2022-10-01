// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRULEREPORTREQUEST_H
#define QTAWS_GETINSIGHTRULEREPORTREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetInsightRuleReportRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT GetInsightRuleReportRequest : public CloudWatchRequest {

public:
    GetInsightRuleReportRequest(const GetInsightRuleReportRequest &other);
    GetInsightRuleReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightRuleReportRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
