// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESRESPONSE_H
#define QTAWS_LISTBUILDBATCHESRESPONSE_H

#include "codebuildresponse.h"
#include "listbuildbatchesrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListBuildBatchesResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListBuildBatchesResponse(const ListBuildBatchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuildBatchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildBatchesResponse)
    Q_DISABLE_COPY(ListBuildBatchesResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
