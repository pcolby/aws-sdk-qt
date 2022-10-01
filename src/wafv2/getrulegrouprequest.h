// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPREQUEST_H
#define QTAWS_GETRULEGROUPREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetRuleGroupRequestPrivate;

class QTAWSWAFV2_EXPORT GetRuleGroupRequest : public Wafv2Request {

public:
    GetRuleGroupRequest(const GetRuleGroupRequest &other);
    GetRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
