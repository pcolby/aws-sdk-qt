// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTCREATIONRESPONSE_P_H
#define QTAWS_STARTREPORTCREATIONRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class StartReportCreationResponse;

class StartReportCreationResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit StartReportCreationResponsePrivate(StartReportCreationResponse * const q);

    void parseStartReportCreationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReportCreationResponse)
    Q_DISABLE_COPY(StartReportCreationResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
