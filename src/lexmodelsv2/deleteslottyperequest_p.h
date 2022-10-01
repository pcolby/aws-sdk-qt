// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEREQUEST_P_H
#define QTAWS_DELETESLOTTYPEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotTypeRequest;

class DeleteSlotTypeRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteSlotTypeRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteSlotTypeRequest * const q);
    DeleteSlotTypeRequestPrivate(const DeleteSlotTypeRequestPrivate &other,
                                   DeleteSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
