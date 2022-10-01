// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELREQUEST_P_H
#define QTAWS_DESCRIBEMODELREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "describemodelrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeModelRequest;

class DescribeModelRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DescribeModelRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DescribeModelRequest * const q);
    DescribeModelRequestPrivate(const DescribeModelRequestPrivate &other,
                                   DescribeModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
