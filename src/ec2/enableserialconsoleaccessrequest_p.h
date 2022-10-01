// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESERIALCONSOLEACCESSREQUEST_P_H
#define QTAWS_ENABLESERIALCONSOLEACCESSREQUEST_P_H

#include "ec2request_p.h"
#include "enableserialconsoleaccessrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableSerialConsoleAccessRequest;

class EnableSerialConsoleAccessRequestPrivate : public Ec2RequestPrivate {

public:
    EnableSerialConsoleAccessRequestPrivate(const Ec2Request::Action action,
                                   EnableSerialConsoleAccessRequest * const q);
    EnableSerialConsoleAccessRequestPrivate(const EnableSerialConsoleAccessRequestPrivate &other,
                                   EnableSerialConsoleAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableSerialConsoleAccessRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
