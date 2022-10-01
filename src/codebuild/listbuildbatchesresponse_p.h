// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESRESPONSE_P_H
#define QTAWS_LISTBUILDBATCHESRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesResponse;

class ListBuildBatchesResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListBuildBatchesResponsePrivate(ListBuildBatchesResponse * const q);

    void parseListBuildBatchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBuildBatchesResponse)
    Q_DISABLE_COPY(ListBuildBatchesResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
