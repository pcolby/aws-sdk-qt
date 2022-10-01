// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELREQUEST_P_H
#define QTAWS_DESCRIBELABELREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "describelabelrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelRequest;

class DescribeLabelRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DescribeLabelRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DescribeLabelRequest * const q);
    DescribeLabelRequestPrivate(const DescribeLabelRequestPrivate &other,
                                   DescribeLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLabelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
