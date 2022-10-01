// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTRESPONSE_P_H
#define QTAWS_DELETEREPORTRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportResponse;

class DeleteReportResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DeleteReportResponsePrivate(DeleteReportResponse * const q);

    void parseDeleteReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReportResponse)
    Q_DISABLE_COPY(DeleteReportResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
