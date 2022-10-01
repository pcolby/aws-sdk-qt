// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPORTGROUPTRENDREQUEST_P_H
#define QTAWS_GETREPORTGROUPTRENDREQUEST_P_H

#include "codebuildrequest_p.h"
#include "getreportgrouptrendrequest.h"

namespace QtAws {
namespace CodeBuild {

class GetReportGroupTrendRequest;

class GetReportGroupTrendRequestPrivate : public CodeBuildRequestPrivate {

public:
    GetReportGroupTrendRequestPrivate(const CodeBuildRequest::Action action,
                                   GetReportGroupTrendRequest * const q);
    GetReportGroupTrendRequestPrivate(const GetReportGroupTrendRequestPrivate &other,
                                   GetReportGroupTrendRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReportGroupTrendRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
