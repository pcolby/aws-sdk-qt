// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTLOCALEREQUEST_P_H
#define QTAWS_UPDATEBOTLOCALEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updatebotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotLocaleRequest;

class UpdateBotLocaleRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateBotLocaleRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateBotLocaleRequest * const q);
    UpdateBotLocaleRequestPrivate(const UpdateBotLocaleRequestPrivate &other,
                                   UpdateBotLocaleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
