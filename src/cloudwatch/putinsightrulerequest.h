// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTRULEREQUEST_H
#define QTAWS_PUTINSIGHTRULEREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutInsightRuleRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutInsightRuleRequest : public CloudWatchRequest {

public:
    PutInsightRuleRequest(const PutInsightRuleRequest &other);
    PutInsightRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInsightRuleRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
