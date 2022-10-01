// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDINSIGHTRULESREQUEST_H
#define QTAWS_PUTMANAGEDINSIGHTRULESREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutManagedInsightRulesRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutManagedInsightRulesRequest : public CloudWatchRequest {

public:
    PutManagedInsightRulesRequest(const PutManagedInsightRulesRequest &other);
    PutManagedInsightRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutManagedInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
