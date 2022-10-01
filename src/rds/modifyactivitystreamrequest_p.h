// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACTIVITYSTREAMREQUEST_P_H
#define QTAWS_MODIFYACTIVITYSTREAMREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifyactivitystreamrequest.h"

namespace QtAws {
namespace Rds {

class ModifyActivityStreamRequest;

class ModifyActivityStreamRequestPrivate : public RdsRequestPrivate {

public:
    ModifyActivityStreamRequestPrivate(const RdsRequest::Action action,
                                   ModifyActivityStreamRequest * const q);
    ModifyActivityStreamRequestPrivate(const ModifyActivityStreamRequestPrivate &other,
                                   ModifyActivityStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyActivityStreamRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
