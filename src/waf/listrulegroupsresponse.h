// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSRESPONSE_H
#define QTAWS_LISTRULEGROUPSRESPONSE_H

#include "wafresponse.h"
#include "listrulegroupsrequest.h"

namespace QtAws {
namespace Waf {

class ListRuleGroupsResponsePrivate;

class QTAWSWAF_EXPORT ListRuleGroupsResponse : public WafResponse {
    Q_OBJECT

public:
    ListRuleGroupsResponse(const ListRuleGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRuleGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleGroupsResponse)
    Q_DISABLE_COPY(ListRuleGroupsResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
