// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDBATCHRESPONSE_P_H
#define QTAWS_DELETEBUILDBATCHRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DeleteBuildBatchResponse;

class DeleteBuildBatchResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DeleteBuildBatchResponsePrivate(DeleteBuildBatchResponse * const q);

    void parseDeleteBuildBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBuildBatchResponse)
    Q_DISABLE_COPY(DeleteBuildBatchResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
