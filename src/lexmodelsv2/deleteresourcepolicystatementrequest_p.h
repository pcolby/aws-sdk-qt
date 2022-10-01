// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYSTATEMENTREQUEST_P_H
#define QTAWS_DELETERESOURCEPOLICYSTATEMENTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteresourcepolicystatementrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteResourcePolicyStatementRequest;

class DeleteResourcePolicyStatementRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteResourcePolicyStatementRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteResourcePolicyStatementRequest * const q);
    DeleteResourcePolicyStatementRequestPrivate(const DeleteResourcePolicyStatementRequestPrivate &other,
                                   DeleteResourcePolicyStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourcePolicyStatementRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
