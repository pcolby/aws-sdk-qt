// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELGROUPREQUEST_P_H
#define QTAWS_DELETELABELGROUPREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "deletelabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteLabelGroupRequest;

class DeleteLabelGroupRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DeleteLabelGroupRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DeleteLabelGroupRequest * const q);
    DeleteLabelGroupRequestPrivate(const DeleteLabelGroupRequestPrivate &other,
                                   DeleteLabelGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
