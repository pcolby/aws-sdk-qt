// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPREQUEST_H
#define QTAWS_GETRULEGROUPREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetRuleGroupRequestPrivate;

class QTAWSWAF_EXPORT GetRuleGroupRequest : public WafRequest {

public:
    GetRuleGroupRequest(const GetRuleGroupRequest &other);
    GetRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRuleGroupRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
