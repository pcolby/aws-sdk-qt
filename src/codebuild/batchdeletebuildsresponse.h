// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEBUILDSRESPONSE_H
#define QTAWS_BATCHDELETEBUILDSRESPONSE_H

#include "codebuildresponse.h"
#include "batchdeletebuildsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchDeleteBuildsResponsePrivate;

class QTAWSCODEBUILD_EXPORT BatchDeleteBuildsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    BatchDeleteBuildsResponse(const BatchDeleteBuildsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteBuildsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteBuildsResponse)
    Q_DISABLE_COPY(BatchDeleteBuildsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
