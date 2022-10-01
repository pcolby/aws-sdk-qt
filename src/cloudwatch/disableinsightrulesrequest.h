// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEINSIGHTRULESREQUEST_H
#define QTAWS_DISABLEINSIGHTRULESREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DisableInsightRulesRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DisableInsightRulesRequest : public CloudWatchRequest {

public:
    DisableInsightRulesRequest(const DisableInsightRulesRequest &other);
    DisableInsightRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
