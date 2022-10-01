// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELABELGROUPREQUEST_P_H
#define QTAWS_UPDATELABELGROUPREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "updatelabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateLabelGroupRequest;

class UpdateLabelGroupRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    UpdateLabelGroupRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   UpdateLabelGroupRequest * const q);
    UpdateLabelGroupRequestPrivate(const UpdateLabelGroupRequestPrivate &other,
                                   UpdateLabelGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
