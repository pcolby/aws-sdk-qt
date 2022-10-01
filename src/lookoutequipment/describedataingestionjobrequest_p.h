// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAINGESTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEDATAINGESTIONJOBREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "describedataingestionjobrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeDataIngestionJobRequest;

class DescribeDataIngestionJobRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DescribeDataIngestionJobRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DescribeDataIngestionJobRequest * const q);
    DescribeDataIngestionJobRequestPrivate(const DescribeDataIngestionJobRequestPrivate &other,
                                   DescribeDataIngestionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataIngestionJobRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
