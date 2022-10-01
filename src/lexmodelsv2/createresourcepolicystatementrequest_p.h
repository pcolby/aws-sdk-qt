// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYSTATEMENTREQUEST_P_H
#define QTAWS_CREATERESOURCEPOLICYSTATEMENTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createresourcepolicystatementrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyStatementRequest;

class CreateResourcePolicyStatementRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateResourcePolicyStatementRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateResourcePolicyStatementRequest * const q);
    CreateResourcePolicyStatementRequestPrivate(const CreateResourcePolicyStatementRequestPrivate &other,
                                   CreateResourcePolicyStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourcePolicyStatementRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
