// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTRESPONSE_H
#define QTAWS_DELETEREPORTRESPONSE_H

#include "codebuildresponse.h"
#include "deletereportrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportResponsePrivate;

class QTAWSCODEBUILD_EXPORT DeleteReportResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DeleteReportResponse(const DeleteReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportResponse)
    Q_DISABLE_COPY(DeleteReportResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
