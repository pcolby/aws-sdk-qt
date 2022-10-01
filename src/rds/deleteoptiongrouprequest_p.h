// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTIONGROUPREQUEST_P_H
#define QTAWS_DELETEOPTIONGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "deleteoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class DeleteOptionGroupRequest;

class DeleteOptionGroupRequestPrivate : public RdsRequestPrivate {

public:
    DeleteOptionGroupRequestPrivate(const RdsRequest::Action action,
                                   DeleteOptionGroupRequest * const q);
    DeleteOptionGroupRequestPrivate(const DeleteOptionGroupRequestPrivate &other,
                                   DeleteOptionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
