// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTIONGROUPREQUEST_P_H
#define QTAWS_CREATEOPTIONGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "createoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class CreateOptionGroupRequest;

class CreateOptionGroupRequestPrivate : public RdsRequestPrivate {

public:
    CreateOptionGroupRequestPrivate(const RdsRequest::Action action,
                                   CreateOptionGroupRequest * const q);
    CreateOptionGroupRequestPrivate(const CreateOptionGroupRequestPrivate &other,
                                   CreateOptionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
