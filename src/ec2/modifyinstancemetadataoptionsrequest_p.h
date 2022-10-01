// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMETADATAOPTIONSREQUEST_P_H
#define QTAWS_MODIFYINSTANCEMETADATAOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstancemetadataoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMetadataOptionsRequest;

class ModifyInstanceMetadataOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceMetadataOptionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceMetadataOptionsRequest * const q);
    ModifyInstanceMetadataOptionsRequestPrivate(const ModifyInstanceMetadataOptionsRequestPrivate &other,
                                   ModifyInstanceMetadataOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceMetadataOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
