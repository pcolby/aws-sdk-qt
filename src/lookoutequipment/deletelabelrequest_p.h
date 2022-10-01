// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELREQUEST_P_H
#define QTAWS_DELETELABELREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "deletelabelrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteLabelRequest;

class DeleteLabelRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DeleteLabelRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DeleteLabelRequest * const q);
    DeleteLabelRequestPrivate(const DeleteLabelRequestPrivate &other,
                                   DeleteLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLabelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
