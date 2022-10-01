// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCESCONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTSOURCESCONFIGRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeEventSourcesConfigResponse;

class DescribeEventSourcesConfigResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeEventSourcesConfigResponsePrivate(DescribeEventSourcesConfigResponse * const q);

    void parseDescribeEventSourcesConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventSourcesConfigResponse)
    Q_DISABLE_COPY(DescribeEventSourcesConfigResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
