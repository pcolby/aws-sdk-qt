// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEREQUEST_H
#define QTAWS_GETRATEBASEDRULEREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRateBasedRuleRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetRateBasedRuleRequest : public WafRegionalRequest {

public:
    GetRateBasedRuleRequest(const GetRateBasedRuleRequest &other);
    GetRateBasedRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
