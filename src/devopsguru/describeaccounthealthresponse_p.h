// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTHEALTHRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountHealthResponse;

class DescribeAccountHealthResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeAccountHealthResponsePrivate(DescribeAccountHealthResponse * const q);

    void parseDescribeAccountHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountHealthResponse)
    Q_DISABLE_COPY(DescribeAccountHealthResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
