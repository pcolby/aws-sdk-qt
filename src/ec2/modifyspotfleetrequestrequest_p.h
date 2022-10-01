// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSPOTFLEETREQUESTREQUEST_P_H
#define QTAWS_MODIFYSPOTFLEETREQUESTREQUEST_P_H

#include "ec2request_p.h"
#include "modifyspotfleetrequestrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySpotFleetRequestRequest;

class ModifySpotFleetRequestRequestPrivate : public Ec2RequestPrivate {

public:
    ModifySpotFleetRequestRequestPrivate(const Ec2Request::Action action,
                                   ModifySpotFleetRequestRequest * const q);
    ModifySpotFleetRequestRequestPrivate(const ModifySpotFleetRequestRequestPrivate &other,
                                   ModifySpotFleetRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySpotFleetRequestRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
