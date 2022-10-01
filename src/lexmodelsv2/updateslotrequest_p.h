// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTREQUEST_P_H
#define QTAWS_UPDATESLOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updateslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotRequest;

class UpdateSlotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateSlotRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateSlotRequest * const q);
    UpdateSlotRequestPrivate(const UpdateSlotRequestPrivate &other,
                                   UpdateSlotRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
