// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPREQUEST_P_H
#define QTAWS_DELETERULEGROUPREQUEST_P_H

#include "wafv2request_p.h"
#include "deleterulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteRuleGroupRequest;

class DeleteRuleGroupRequestPrivate : public Wafv2RequestPrivate {

public:
    DeleteRuleGroupRequestPrivate(const Wafv2Request::Action action,
                                   DeleteRuleGroupRequest * const q);
    DeleteRuleGroupRequestPrivate(const DeleteRuleGroupRequestPrivate &other,
                                   DeleteRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
