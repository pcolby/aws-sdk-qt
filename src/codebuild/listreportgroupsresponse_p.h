// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTGROUPSRESPONSE_P_H
#define QTAWS_LISTREPORTGROUPSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListReportGroupsResponse;

class ListReportGroupsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListReportGroupsResponsePrivate(ListReportGroupsResponse * const q);

    void parseListReportGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReportGroupsResponse)
    Q_DISABLE_COPY(ListReportGroupsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
