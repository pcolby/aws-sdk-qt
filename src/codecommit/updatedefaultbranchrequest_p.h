// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTBRANCHREQUEST_P_H
#define QTAWS_UPDATEDEFAULTBRANCHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatedefaultbranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateDefaultBranchRequest;

class UpdateDefaultBranchRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateDefaultBranchRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateDefaultBranchRequest * const q);
    UpdateDefaultBranchRequestPrivate(const UpdateDefaultBranchRequestPrivate &other,
                                   UpdateDefaultBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDefaultBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
