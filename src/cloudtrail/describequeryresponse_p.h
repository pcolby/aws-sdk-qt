// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYRESPONSE_P_H
#define QTAWS_DESCRIBEQUERYRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class DescribeQueryResponse;

class DescribeQueryResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit DescribeQueryResponsePrivate(DescribeQueryResponse * const q);

    void parseDescribeQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQueryResponse)
    Q_DISABLE_COPY(DescribeQueryResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
