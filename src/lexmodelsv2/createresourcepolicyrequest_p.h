// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYREQUEST_P_H
#define QTAWS_CREATERESOURCEPOLICYREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createresourcepolicyrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyRequest;

class CreateResourcePolicyRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateResourcePolicyRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateResourcePolicyRequest * const q);
    CreateResourcePolicyRequestPrivate(const CreateResourcePolicyRequestPrivate &other,
                                   CreateResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
