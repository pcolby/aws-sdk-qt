// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYTHREEWAYREQUEST_P_H
#define QTAWS_MERGEBRANCHESBYTHREEWAYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergebranchesbythreewayrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByThreeWayRequest;

class MergeBranchesByThreeWayRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergeBranchesByThreeWayRequestPrivate(const CodeCommitRequest::Action action,
                                   MergeBranchesByThreeWayRequest * const q);
    MergeBranchesByThreeWayRequestPrivate(const MergeBranchesByThreeWayRequestPrivate &other,
                                   MergeBranchesByThreeWayRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergeBranchesByThreeWayRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
