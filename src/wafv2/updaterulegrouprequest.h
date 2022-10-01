// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPREQUEST_H
#define QTAWS_UPDATERULEGROUPREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRuleGroupRequestPrivate;

class QTAWSWAFV2_EXPORT UpdateRuleGroupRequest : public Wafv2Request {

public:
    UpdateRuleGroupRequest(const UpdateRuleGroupRequest &other);
    UpdateRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
