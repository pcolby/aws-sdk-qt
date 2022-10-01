// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSFORPROJECTRESPONSE_H
#define QTAWS_LISTBUILDSFORPROJECTRESPONSE_H

#include "codebuildresponse.h"
#include "listbuildsforprojectrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsForProjectResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListBuildsForProjectResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListBuildsForProjectResponse(const ListBuildsForProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuildsForProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildsForProjectResponse)
    Q_DISABLE_COPY(ListBuildsForProjectResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
