// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTECTIONSTATUSREQUEST_P_H
#define QTAWS_GETPROTECTIONSTATUSREQUEST_P_H

#include "fmsrequest_p.h"
#include "getprotectionstatusrequest.h"

namespace QtAws {
namespace Fms {

class GetProtectionStatusRequest;

class GetProtectionStatusRequestPrivate : public FmsRequestPrivate {

public:
    GetProtectionStatusRequestPrivate(const FmsRequest::Action action,
                                   GetProtectionStatusRequest * const q);
    GetProtectionStatusRequestPrivate(const GetProtectionStatusRequestPrivate &other,
                                   GetProtectionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProtectionStatusRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
