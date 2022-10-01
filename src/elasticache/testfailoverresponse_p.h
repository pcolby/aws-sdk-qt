// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTFAILOVERRESPONSE_P_H
#define QTAWS_TESTFAILOVERRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class TestFailoverResponse;

class TestFailoverResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit TestFailoverResponsePrivate(TestFailoverResponse * const q);

    void parseTestFailoverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestFailoverResponse)
    Q_DISABLE_COPY(TestFailoverResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
