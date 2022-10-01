// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIMITSRESPONSE_P_H
#define QTAWS_DESCRIBELIMITSRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DescribeLimitsResponse;

class DescribeLimitsResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DescribeLimitsResponsePrivate(DescribeLimitsResponse * const q);

    void parseDescribeLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLimitsResponse)
    Q_DISABLE_COPY(DescribeLimitsResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
