// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAVAILABILITYZONEGROUPREQUEST_H
#define QTAWS_MODIFYAVAILABILITYZONEGROUPREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyAvailabilityZoneGroupRequestPrivate;

class QTAWSEC2_EXPORT ModifyAvailabilityZoneGroupRequest : public Ec2Request {

public:
    ModifyAvailabilityZoneGroupRequest(const ModifyAvailabilityZoneGroupRequest &other);
    ModifyAvailabilityZoneGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAvailabilityZoneGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
