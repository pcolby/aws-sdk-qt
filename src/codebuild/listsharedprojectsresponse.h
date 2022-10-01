// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDPROJECTSRESPONSE_H
#define QTAWS_LISTSHAREDPROJECTSRESPONSE_H

#include "codebuildresponse.h"
#include "listsharedprojectsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedProjectsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListSharedProjectsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListSharedProjectsResponse(const ListSharedProjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSharedProjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSharedProjectsResponse)
    Q_DISABLE_COPY(ListSharedProjectsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
