// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCERESPONSE_P_H
#define QTAWS_DESCRIBERESOURCERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DescribeResourceResponse;

class DescribeResourceResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DescribeResourceResponsePrivate(DescribeResourceResponse * const q);

    void parseDescribeResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourceResponse)
    Q_DISABLE_COPY(DescribeResourceResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
