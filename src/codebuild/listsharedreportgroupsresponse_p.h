// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDREPORTGROUPSRESPONSE_P_H
#define QTAWS_LISTSHAREDREPORTGROUPSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedReportGroupsResponse;

class ListSharedReportGroupsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListSharedReportGroupsResponsePrivate(ListSharedReportGroupsResponse * const q);

    void parseListSharedReportGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSharedReportGroupsResponse)
    Q_DISABLE_COPY(ListSharedReportGroupsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
