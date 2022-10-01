// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESFORPROJECTRESPONSE_H
#define QTAWS_LISTBUILDBATCHESFORPROJECTRESPONSE_H

#include "codebuildresponse.h"
#include "listbuildbatchesforprojectrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesForProjectResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListBuildBatchesForProjectResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListBuildBatchesForProjectResponse(const ListBuildBatchesForProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuildBatchesForProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildBatchesForProjectResponse)
    Q_DISABLE_COPY(ListBuildBatchesForProjectResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
