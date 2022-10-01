// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDRULEGROUPRESPONSE_H
#define QTAWS_DESCRIBEMANAGEDRULEGROUPRESPONSE_H

#include "wafv2response.h"
#include "describemanagedrulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class DescribeManagedRuleGroupResponsePrivate;

class QTAWSWAFV2_EXPORT DescribeManagedRuleGroupResponse : public Wafv2Response {
    Q_OBJECT

public:
    DescribeManagedRuleGroupResponse(const DescribeManagedRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeManagedRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeManagedRuleGroupResponse)
    Q_DISABLE_COPY(DescribeManagedRuleGroupResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
