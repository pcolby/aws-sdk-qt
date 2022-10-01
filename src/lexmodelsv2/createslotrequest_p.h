// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTREQUEST_P_H
#define QTAWS_CREATESLOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotRequest;

class CreateSlotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateSlotRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateSlotRequest * const q);
    CreateSlotRequestPrivate(const CreateSlotRequestPrivate &other,
                                   CreateSlotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
