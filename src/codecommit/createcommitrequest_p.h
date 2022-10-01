// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMITREQUEST_P_H
#define QTAWS_CREATECOMMITREQUEST_P_H

#include "codecommitrequest_p.h"
#include "createcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateCommitRequest;

class CreateCommitRequestPrivate : public CodeCommitRequestPrivate {

public:
    CreateCommitRequestPrivate(const CodeCommitRequest::Action action,
                                   CreateCommitRequest * const q);
    CreateCommitRequestPrivate(const CreateCommitRequestPrivate &other,
                                   CreateCommitRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
