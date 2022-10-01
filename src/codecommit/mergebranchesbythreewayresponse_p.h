// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYTHREEWAYRESPONSE_P_H
#define QTAWS_MERGEBRANCHESBYTHREEWAYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByThreeWayResponse;

class MergeBranchesByThreeWayResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit MergeBranchesByThreeWayResponsePrivate(MergeBranchesByThreeWayResponse * const q);

    void parseMergeBranchesByThreeWayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergeBranchesByThreeWayResponse)
    Q_DISABLE_COPY(MergeBranchesByThreeWayResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
