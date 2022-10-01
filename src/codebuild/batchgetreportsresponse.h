// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTSRESPONSE_H
#define QTAWS_BATCHGETREPORTSRESPONSE_H

#include "codebuildresponse.h"
#include "batchgetreportsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportsResponsePrivate;

class QTAWSCODEBUILD_EXPORT BatchGetReportsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    BatchGetReportsResponse(const BatchGetReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetReportsResponse)
    Q_DISABLE_COPY(BatchGetReportsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
