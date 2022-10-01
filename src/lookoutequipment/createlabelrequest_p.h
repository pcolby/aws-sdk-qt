// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELREQUEST_P_H
#define QTAWS_CREATELABELREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "createlabelrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelRequest;

class CreateLabelRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    CreateLabelRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   CreateLabelRequest * const q);
    CreateLabelRequestPrivate(const CreateLabelRequestPrivate &other,
                                   CreateLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLabelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
