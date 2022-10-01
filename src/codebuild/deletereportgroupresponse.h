// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTGROUPRESPONSE_H
#define QTAWS_DELETEREPORTGROUPRESPONSE_H

#include "codebuildresponse.h"
#include "deletereportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportGroupResponsePrivate;

class QTAWSCODEBUILD_EXPORT DeleteReportGroupResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DeleteReportGroupResponse(const DeleteReportGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReportGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportGroupResponse)
    Q_DISABLE_COPY(DeleteReportGroupResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
