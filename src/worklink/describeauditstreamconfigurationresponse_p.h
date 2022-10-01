// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeAuditStreamConfigurationResponse;

class DescribeAuditStreamConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeAuditStreamConfigurationResponsePrivate(DescribeAuditStreamConfigurationResponse * const q);

    void parseDescribeAuditStreamConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAuditStreamConfigurationResponse)
    Q_DISABLE_COPY(DescribeAuditStreamConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
