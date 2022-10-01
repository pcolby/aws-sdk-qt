// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKRESPONSE_P_H
#define QTAWS_DESCRIBEATTACKRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeAttackResponse;

class DescribeAttackResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeAttackResponsePrivate(DescribeAttackResponse * const q);

    void parseDescribeAttackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAttackResponse)
    Q_DISABLE_COPY(DescribeAttackResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
