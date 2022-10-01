// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATEACTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEUPDATEACTIONSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUpdateActionsResponse;

class DescribeUpdateActionsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeUpdateActionsResponsePrivate(DescribeUpdateActionsResponse * const q);

    void parseDescribeUpdateActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUpdateActionsResponse)
    Q_DISABLE_COPY(DescribeUpdateActionsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
