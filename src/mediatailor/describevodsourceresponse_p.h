// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVODSOURCERESPONSE_P_H
#define QTAWS_DESCRIBEVODSOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DescribeVodSourceResponse;

class DescribeVodSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DescribeVodSourceResponsePrivate(DescribeVodSourceResponse * const q);

    void parseDescribeVodSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVodSourceResponse)
    Q_DISABLE_COPY(DescribeVodSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
