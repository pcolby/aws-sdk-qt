// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTTYPEREQUEST_P_H
#define QTAWS_DESCRIBESLOTTYPEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describeslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotTypeRequest;

class DescribeSlotTypeRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeSlotTypeRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeSlotTypeRequest * const q);
    DescribeSlotTypeRequestPrivate(const DescribeSlotTypeRequestPrivate &other,
                                   DescribeSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
