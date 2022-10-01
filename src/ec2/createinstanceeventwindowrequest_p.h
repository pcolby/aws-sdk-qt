// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEVENTWINDOWREQUEST_P_H
#define QTAWS_CREATEINSTANCEEVENTWINDOWREQUEST_P_H

#include "ec2request_p.h"
#include "createinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceEventWindowRequest;

class CreateInstanceEventWindowRequestPrivate : public Ec2RequestPrivate {

public:
    CreateInstanceEventWindowRequestPrivate(const Ec2Request::Action action,
                                   CreateInstanceEventWindowRequest * const q);
    CreateInstanceEventWindowRequestPrivate(const CreateInstanceEventWindowRequestPrivate &other,
                                   CreateInstanceEventWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
