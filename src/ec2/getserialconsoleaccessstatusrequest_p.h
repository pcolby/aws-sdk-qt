// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERIALCONSOLEACCESSSTATUSREQUEST_P_H
#define QTAWS_GETSERIALCONSOLEACCESSSTATUSREQUEST_P_H

#include "ec2request_p.h"
#include "getserialconsoleaccessstatusrequest.h"

namespace QtAws {
namespace Ec2 {

class GetSerialConsoleAccessStatusRequest;

class GetSerialConsoleAccessStatusRequestPrivate : public Ec2RequestPrivate {

public:
    GetSerialConsoleAccessStatusRequestPrivate(const Ec2Request::Action action,
                                   GetSerialConsoleAccessStatusRequest * const q);
    GetSerialConsoleAccessStatusRequestPrivate(const GetSerialConsoleAccessStatusRequestPrivate &other,
                                   GetSerialConsoleAccessStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSerialConsoleAccessStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
