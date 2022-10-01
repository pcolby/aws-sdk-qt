// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERATEBASEDRULEREQUEST_H
#define QTAWS_DELETERATEBASEDRULEREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class DeleteRateBasedRuleRequestPrivate;

class QTAWSWAF_EXPORT DeleteRateBasedRuleRequest : public WafRequest {

public:
    DeleteRateBasedRuleRequest(const DeleteRateBasedRuleRequest &other);
    DeleteRateBasedRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRateBasedRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
