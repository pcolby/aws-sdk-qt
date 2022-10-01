// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDRULEGROUPREQUEST_H
#define QTAWS_DESCRIBEMANAGEDRULEGROUPREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DescribeManagedRuleGroupRequestPrivate;

class QTAWSWAFV2_EXPORT DescribeManagedRuleGroupRequest : public Wafv2Request {

public:
    DescribeManagedRuleGroupRequest(const DescribeManagedRuleGroupRequest &other);
    DescribeManagedRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeManagedRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
