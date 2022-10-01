// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTREQUEST_P_H
#define QTAWS_DELETESLOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotRequest;

class DeleteSlotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteSlotRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteSlotRequest * const q);
    DeleteSlotRequestPrivate(const DeleteSlotRequestPrivate &other,
                                   DeleteSlotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
