// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTGROUPRESPONSE_H
#define QTAWS_CREATEREPORTGROUPRESPONSE_H

#include "codebuildresponse.h"
#include "createreportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class CreateReportGroupResponsePrivate;

class QTAWSCODEBUILD_EXPORT CreateReportGroupResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    CreateReportGroupResponse(const CreateReportGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReportGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReportGroupResponse)
    Q_DISABLE_COPY(CreateReportGroupResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
