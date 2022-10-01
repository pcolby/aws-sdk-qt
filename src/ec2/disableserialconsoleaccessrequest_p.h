// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESERIALCONSOLEACCESSREQUEST_P_H
#define QTAWS_DISABLESERIALCONSOLEACCESSREQUEST_P_H

#include "ec2request_p.h"
#include "disableserialconsoleaccessrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableSerialConsoleAccessRequest;

class DisableSerialConsoleAccessRequestPrivate : public Ec2RequestPrivate {

public:
    DisableSerialConsoleAccessRequestPrivate(const Ec2Request::Action action,
                                   DisableSerialConsoleAccessRequest * const q);
    DisableSerialConsoleAccessRequestPrivate(const DisableSerialConsoleAccessRequestPrivate &other,
                                   DisableSerialConsoleAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableSerialConsoleAccessRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
