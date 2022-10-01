// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELGROUPREQUEST_P_H
#define QTAWS_CREATELABELGROUPREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "createlabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelGroupRequest;

class CreateLabelGroupRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    CreateLabelGroupRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   CreateLabelGroupRequest * const q);
    CreateLabelGroupRequestPrivate(const CreateLabelGroupRequestPrivate &other,
                                   CreateLabelGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
