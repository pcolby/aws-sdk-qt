// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDINSIGHTRULESREQUEST_H
#define QTAWS_LISTMANAGEDINSIGHTRULESREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListManagedInsightRulesRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT ListManagedInsightRulesRequest : public CloudWatchRequest {

public:
    ListManagedInsightRulesRequest(const ListManagedInsightRulesRequest &other);
    ListManagedInsightRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
