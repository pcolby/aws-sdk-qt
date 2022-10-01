// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPRESPONSE_H
#define QTAWS_GETRULEGROUPRESPONSE_H

#include "wafresponse.h"
#include "getrulegrouprequest.h"

namespace QtAws {
namespace Waf {

class GetRuleGroupResponsePrivate;

class QTAWSWAF_EXPORT GetRuleGroupResponse : public WafResponse {
    Q_OBJECT

public:
    GetRuleGroupResponse(const GetRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRuleGroupResponse)
    Q_DISABLE_COPY(GetRuleGroupResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
