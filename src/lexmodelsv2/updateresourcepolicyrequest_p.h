// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEPOLICYREQUEST_P_H
#define QTAWS_UPDATERESOURCEPOLICYREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updateresourcepolicyrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateResourcePolicyRequest;

class UpdateResourcePolicyRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateResourcePolicyRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateResourcePolicyRequest * const q);
    UpdateResourcePolicyRequestPrivate(const UpdateResourcePolicyRequestPrivate &other,
                                   UpdateResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
