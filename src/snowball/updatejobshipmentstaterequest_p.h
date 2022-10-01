// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSHIPMENTSTATEREQUEST_P_H
#define QTAWS_UPDATEJOBSHIPMENTSTATEREQUEST_P_H

#include "snowballrequest_p.h"
#include "updatejobshipmentstaterequest.h"

namespace QtAws {
namespace Snowball {

class UpdateJobShipmentStateRequest;

class UpdateJobShipmentStateRequestPrivate : public SnowballRequestPrivate {

public:
    UpdateJobShipmentStateRequestPrivate(const SnowballRequest::Action action,
                                   UpdateJobShipmentStateRequest * const q);
    UpdateJobShipmentStateRequestPrivate(const UpdateJobShipmentStateRequestPrivate &other,
                                   UpdateJobShipmentStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobShipmentStateRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
