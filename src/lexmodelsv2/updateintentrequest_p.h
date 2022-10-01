// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTENTREQUEST_P_H
#define QTAWS_UPDATEINTENTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updateintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateIntentRequest;

class UpdateIntentRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateIntentRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateIntentRequest * const q);
    UpdateIntentRequestPrivate(const UpdateIntentRequestPrivate &other,
                                   UpdateIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
