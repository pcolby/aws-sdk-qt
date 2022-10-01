// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYREQUEST_P_H
#define QTAWS_MODIFYDBPROXYREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbproxyrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyRequest;

class ModifyDBProxyRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBProxyRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBProxyRequest * const q);
    ModifyDBProxyRequestPrivate(const ModifyDBProxyRequestPrivate &other,
                                   ModifyDBProxyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
