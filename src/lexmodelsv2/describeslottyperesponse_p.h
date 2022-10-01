// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTTYPERESPONSE_P_H
#define QTAWS_DESCRIBESLOTTYPERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotTypeResponse;

class DescribeSlotTypeResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeSlotTypeResponsePrivate(DescribeSlotTypeResponse * const q);

    void parseDescribeSlotTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSlotTypeResponse)
    Q_DISABLE_COPY(DescribeSlotTypeResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
