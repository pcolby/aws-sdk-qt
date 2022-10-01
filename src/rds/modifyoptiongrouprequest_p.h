// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYOPTIONGROUPREQUEST_P_H
#define QTAWS_MODIFYOPTIONGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifyoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyOptionGroupRequest;

class ModifyOptionGroupRequestPrivate : public RdsRequestPrivate {

public:
    ModifyOptionGroupRequestPrivate(const RdsRequest::Action action,
                                   ModifyOptionGroupRequest * const q);
    ModifyOptionGroupRequestPrivate(const ModifyOptionGroupRequestPrivate &other,
                                   ModifyOptionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
