// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTREQUEST_P_H
#define QTAWS_DESCRIBESLOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describeslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotRequest;

class DescribeSlotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeSlotRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeSlotRequest * const q);
    DescribeSlotRequestPrivate(const DescribeSlotRequestPrivate &other,
                                   DescribeSlotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
