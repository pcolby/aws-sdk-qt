// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_H

#include "wafregionalresponse.h"
#include "listsubscribedrulegroupsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSubscribedRuleGroupsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListSubscribedRuleGroupsResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListSubscribedRuleGroupsResponse(const ListSubscribedRuleGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubscribedRuleGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscribedRuleGroupsResponse)
    Q_DISABLE_COPY(ListSubscribedRuleGroupsResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
