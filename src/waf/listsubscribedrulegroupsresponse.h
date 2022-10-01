// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_H

#include "wafresponse.h"
#include "listsubscribedrulegroupsrequest.h"

namespace QtAws {
namespace Waf {

class ListSubscribedRuleGroupsResponsePrivate;

class QTAWSWAF_EXPORT ListSubscribedRuleGroupsResponse : public WafResponse {
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

} // namespace Waf
} // namespace QtAws

#endif
