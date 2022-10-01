// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTGROUPRESPONSE_H
#define QTAWS_UPDATEREPORTGROUPRESPONSE_H

#include "codebuildresponse.h"
#include "updatereportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateReportGroupResponsePrivate;

class QTAWSCODEBUILD_EXPORT UpdateReportGroupResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    UpdateReportGroupResponse(const UpdateReportGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReportGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReportGroupResponse)
    Q_DISABLE_COPY(UpdateReportGroupResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
