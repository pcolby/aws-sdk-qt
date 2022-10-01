// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYFASTFORWARDREQUEST_P_H
#define QTAWS_MERGEBRANCHESBYFASTFORWARDREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergebranchesbyfastforwardrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByFastForwardRequest;

class MergeBranchesByFastForwardRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergeBranchesByFastForwardRequestPrivate(const CodeCommitRequest::Action action,
                                   MergeBranchesByFastForwardRequest * const q);
    MergeBranchesByFastForwardRequestPrivate(const MergeBranchesByFastForwardRequestPrivate &other,
                                   MergeBranchesByFastForwardRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergeBranchesByFastForwardRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
