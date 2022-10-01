// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTRESPONSE_P_H
#define QTAWS_DESCRIBEALERTRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAlertResponse;

class DescribeAlertResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DescribeAlertResponsePrivate(DescribeAlertResponse * const q);

    void parseDescribeAlertResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlertResponse)
    Q_DISABLE_COPY(DescribeAlertResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
