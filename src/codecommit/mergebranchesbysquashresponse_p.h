// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYSQUASHRESPONSE_P_H
#define QTAWS_MERGEBRANCHESBYSQUASHRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesBySquashResponse;

class MergeBranchesBySquashResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit MergeBranchesBySquashResponsePrivate(MergeBranchesBySquashResponse * const q);

    void parseMergeBranchesBySquashResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergeBranchesBySquashResponse)
    Q_DISABLE_COPY(MergeBranchesBySquashResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
