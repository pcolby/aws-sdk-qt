// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONREQUEST_P_H
#define QTAWS_COMMITTRANSACTIONREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "committransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class CommitTransactionRequest;

class CommitTransactionRequestPrivate : public LakeFormationRequestPrivate {

public:
    CommitTransactionRequestPrivate(const LakeFormationRequest::Action action,
                                   CommitTransactionRequest * const q);
    CommitTransactionRequestPrivate(const CommitTransactionRequestPrivate &other,
                                   CommitTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CommitTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
