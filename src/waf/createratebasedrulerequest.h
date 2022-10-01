// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERATEBASEDRULEREQUEST_H
#define QTAWS_CREATERATEBASEDRULEREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateRateBasedRuleRequestPrivate;

class QTAWSWAF_EXPORT CreateRateBasedRuleRequest : public WafRequest {

public:
    CreateRateBasedRuleRequest(const CreateRateBasedRuleRequest &other);
    CreateRateBasedRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRateBasedRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
