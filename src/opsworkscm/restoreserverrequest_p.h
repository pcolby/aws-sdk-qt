// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESERVERREQUEST_P_H
#define QTAWS_RESTORESERVERREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "restoreserverrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class RestoreServerRequest;

class RestoreServerRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    RestoreServerRequestPrivate(const OpsWorksCmRequest::Action action,
                                   RestoreServerRequest * const q);
    RestoreServerRequestPrivate(const RestoreServerRequestPrivate &other,
                                   RestoreServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
