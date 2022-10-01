// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATEREQUEST_P_H
#define QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATEREQUEST_P_H

#include "wafv2request_p.h"
#include "updatemanagedrulesetversionexpirydaterequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateManagedRuleSetVersionExpiryDateRequest;

class UpdateManagedRuleSetVersionExpiryDateRequestPrivate : public Wafv2RequestPrivate {

public:
    UpdateManagedRuleSetVersionExpiryDateRequestPrivate(const Wafv2Request::Action action,
                                   UpdateManagedRuleSetVersionExpiryDateRequest * const q);
    UpdateManagedRuleSetVersionExpiryDateRequestPrivate(const UpdateManagedRuleSetVersionExpiryDateRequestPrivate &other,
                                   UpdateManagedRuleSetVersionExpiryDateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateManagedRuleSetVersionExpiryDateRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
