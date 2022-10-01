// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYFASTFORWARDRESPONSE_P_H
#define QTAWS_MERGEBRANCHESBYFASTFORWARDRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByFastForwardResponse;

class MergeBranchesByFastForwardResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit MergeBranchesByFastForwardResponsePrivate(MergeBranchesByFastForwardResponse * const q);

    void parseMergeBranchesByFastForwardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergeBranchesByFastForwardResponse)
    Q_DISABLE_COPY(MergeBranchesByFastForwardResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
