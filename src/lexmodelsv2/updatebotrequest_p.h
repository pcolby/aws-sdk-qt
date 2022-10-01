// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTREQUEST_P_H
#define QTAWS_UPDATEBOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updatebotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotRequest;

class UpdateBotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateBotRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateBotRequest * const q);
    UpdateBotRequestPrivate(const UpdateBotRequestPrivate &other,
                                   UpdateBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
