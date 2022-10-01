// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSFORREPORTGROUPRESPONSE_H
#define QTAWS_LISTREPORTSFORREPORTGROUPRESPONSE_H

#include "codebuildresponse.h"
#include "listreportsforreportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsForReportGroupResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListReportsForReportGroupResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListReportsForReportGroupResponse(const ListReportsForReportGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReportsForReportGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportsForReportGroupResponse)
    Q_DISABLE_COPY(ListReportsForReportGroupResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
