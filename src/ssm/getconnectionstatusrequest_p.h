// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSTATUSREQUEST_P_H
#define QTAWS_GETCONNECTIONSTATUSREQUEST_P_H

#include "ssmrequest_p.h"
#include "getconnectionstatusrequest.h"

namespace QtAws {
namespace Ssm {

class GetConnectionStatusRequest;

class GetConnectionStatusRequestPrivate : public SsmRequestPrivate {

public:
    GetConnectionStatusRequestPrivate(const SsmRequest::Action action,
                                   GetConnectionStatusRequest * const q);
    GetConnectionStatusRequestPrivate(const GetConnectionStatusRequestPrivate &other,
                                   GetConnectionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectionStatusRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
