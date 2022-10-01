// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERREQUEST_P_H
#define QTAWS_UPDATESERVERREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "updateserverrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class UpdateServerRequest;

class UpdateServerRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    UpdateServerRequestPrivate(const OpsWorksCmRequest::Action action,
                                   UpdateServerRequest * const q);
    UpdateServerRequestPrivate(const UpdateServerRequestPrivate &other,
                                   UpdateServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
