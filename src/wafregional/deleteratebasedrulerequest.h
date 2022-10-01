// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERATEBASEDRULEREQUEST_H
#define QTAWS_DELETERATEBASEDRULEREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRateBasedRuleRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteRateBasedRuleRequest : public WafRegionalRequest {

public:
    DeleteRateBasedRuleRequest(const DeleteRateBasedRuleRequest &other);
    DeleteRateBasedRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
