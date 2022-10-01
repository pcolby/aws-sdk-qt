// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTRESPONSE_P_H
#define QTAWS_DESCRIBESLOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotResponse;

class DescribeSlotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeSlotResponsePrivate(DescribeSlotResponse * const q);

    void parseDescribeSlotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSlotResponse)
    Q_DISABLE_COPY(DescribeSlotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
