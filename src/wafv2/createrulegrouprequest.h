// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPREQUEST_H
#define QTAWS_CREATERULEGROUPREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class CreateRuleGroupRequestPrivate;

class QTAWSWAFV2_EXPORT CreateRuleGroupRequest : public Wafv2Request {

public:
    CreateRuleGroupRequest(const CreateRuleGroupRequest &other);
    CreateRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
