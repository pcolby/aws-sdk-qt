// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAILBOXEXPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEMAILBOXEXPORTJOBRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DescribeMailboxExportJobResponse;

class DescribeMailboxExportJobResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DescribeMailboxExportJobResponsePrivate(DescribeMailboxExportJobResponse * const q);

    void parseDescribeMailboxExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMailboxExportJobResponse)
    Q_DISABLE_COPY(DescribeMailboxExportJobResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
