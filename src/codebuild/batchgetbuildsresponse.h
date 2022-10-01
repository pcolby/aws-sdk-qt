// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDSRESPONSE_H
#define QTAWS_BATCHGETBUILDSRESPONSE_H

#include "codebuildresponse.h"
#include "batchgetbuildsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildsResponsePrivate;

class QTAWSCODEBUILD_EXPORT BatchGetBuildsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    BatchGetBuildsResponse(const BatchGetBuildsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetBuildsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetBuildsResponse)
    Q_DISABLE_COPY(BatchGetBuildsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
