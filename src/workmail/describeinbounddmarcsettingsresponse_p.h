// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDDMARCSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEINBOUNDDMARCSETTINGSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DescribeInboundDmarcSettingsResponse;

class DescribeInboundDmarcSettingsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DescribeInboundDmarcSettingsResponsePrivate(DescribeInboundDmarcSettingsResponse * const q);

    void parseDescribeInboundDmarcSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInboundDmarcSettingsResponse)
    Q_DISABLE_COPY(DescribeInboundDmarcSettingsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
