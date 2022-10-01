// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAVAILABILITYZONEGROUPRESPONSE_H
#define QTAWS_MODIFYAVAILABILITYZONEGROUPRESPONSE_H

#include "ec2response.h"
#include "modifyavailabilityzonegrouprequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyAvailabilityZoneGroupResponsePrivate;

class QTAWSEC2_EXPORT ModifyAvailabilityZoneGroupResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyAvailabilityZoneGroupResponse(const ModifyAvailabilityZoneGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyAvailabilityZoneGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAvailabilityZoneGroupResponse)
    Q_DISABLE_COPY(ModifyAvailabilityZoneGroupResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
