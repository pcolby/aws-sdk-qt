// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDINSIGHTRULESRESPONSE_H
#define QTAWS_LISTMANAGEDINSIGHTRULESRESPONSE_H

#include "cloudwatchresponse.h"
#include "listmanagedinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListManagedInsightRulesResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT ListManagedInsightRulesResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    ListManagedInsightRulesResponse(const ListManagedInsightRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedInsightRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedInsightRulesResponse)
    Q_DISABLE_COPY(ListManagedInsightRulesResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
