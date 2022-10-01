// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYREQUEST_P_H
#define QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifycurrentdbclustercapacityrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCurrentDBClusterCapacityRequest;

class ModifyCurrentDBClusterCapacityRequestPrivate : public RdsRequestPrivate {

public:
    ModifyCurrentDBClusterCapacityRequestPrivate(const RdsRequest::Action action,
                                   ModifyCurrentDBClusterCapacityRequest * const q);
    ModifyCurrentDBClusterCapacityRequestPrivate(const ModifyCurrentDBClusterCapacityRequestPrivate &other,
                                   ModifyCurrentDBClusterCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCurrentDBClusterCapacityRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
