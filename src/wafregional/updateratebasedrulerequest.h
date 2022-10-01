// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULEREQUEST_H
#define QTAWS_UPDATERATEBASEDRULEREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRateBasedRuleRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateRateBasedRuleRequest : public WafRegionalRequest {

public:
    UpdateRateBasedRuleRequest(const UpdateRateBasedRuleRequest &other);
    UpdateRateBasedRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
