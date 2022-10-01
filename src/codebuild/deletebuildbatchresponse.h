// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDBATCHRESPONSE_H
#define QTAWS_DELETEBUILDBATCHRESPONSE_H

#include "codebuildresponse.h"
#include "deletebuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteBuildBatchResponsePrivate;

class QTAWSCODEBUILD_EXPORT DeleteBuildBatchResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DeleteBuildBatchResponse(const DeleteBuildBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBuildBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBuildBatchResponse)
    Q_DISABLE_COPY(DeleteBuildBatchResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
