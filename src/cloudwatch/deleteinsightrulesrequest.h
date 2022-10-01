// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTRULESREQUEST_H
#define QTAWS_DELETEINSIGHTRULESREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteInsightRulesRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteInsightRulesRequest : public CloudWatchRequest {

public:
    DeleteInsightRulesRequest(const DeleteInsightRulesRequest &other);
    DeleteInsightRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
