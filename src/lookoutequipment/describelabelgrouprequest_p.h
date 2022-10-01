// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELGROUPREQUEST_P_H
#define QTAWS_DESCRIBELABELGROUPREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "describelabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelGroupRequest;

class DescribeLabelGroupRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DescribeLabelGroupRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DescribeLabelGroupRequest * const q);
    DescribeLabelGroupRequestPrivate(const DescribeLabelGroupRequestPrivate &other,
                                   DescribeLabelGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
