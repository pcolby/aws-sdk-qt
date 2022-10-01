// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSREQUEST_P_H
#define QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstancemaintenanceoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMaintenanceOptionsRequest;

class ModifyInstanceMaintenanceOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceMaintenanceOptionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceMaintenanceOptionsRequest * const q);
    ModifyInstanceMaintenanceOptionsRequestPrivate(const ModifyInstanceMaintenanceOptionsRequestPrivate &other,
                                   ModifyInstanceMaintenanceOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceMaintenanceOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
