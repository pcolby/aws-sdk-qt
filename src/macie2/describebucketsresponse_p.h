// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUCKETSRESPONSE_P_H
#define QTAWS_DESCRIBEBUCKETSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DescribeBucketsResponse;

class DescribeBucketsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DescribeBucketsResponsePrivate(DescribeBucketsResponse * const q);

    void parseDescribeBucketsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBucketsResponse)
    Q_DISABLE_COPY(DescribeBucketsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
