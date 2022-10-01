// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPEREQUEST_P_H
#define QTAWS_CREATESLOTTYPEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotTypeRequest;

class CreateSlotTypeRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateSlotTypeRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateSlotTypeRequest * const q);
    CreateSlotTypeRequestPrivate(const CreateSlotTypeRequestPrivate &other,
                                   CreateSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
