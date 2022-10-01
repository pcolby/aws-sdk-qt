// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTROLPANELRESPONSE_P_H
#define QTAWS_DESCRIBECONTROLPANELRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeControlPanelResponse;

class DescribeControlPanelResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DescribeControlPanelResponsePrivate(DescribeControlPanelResponse * const q);

    void parseDescribeControlPanelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeControlPanelResponse)
    Q_DISABLE_COPY(DescribeControlPanelResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
