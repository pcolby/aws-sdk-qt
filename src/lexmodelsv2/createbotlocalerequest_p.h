// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTLOCALEREQUEST_P_H
#define QTAWS_CREATEBOTLOCALEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createbotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotLocaleRequest;

class CreateBotLocaleRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateBotLocaleRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateBotLocaleRequest * const q);
    CreateBotLocaleRequestPrivate(const CreateBotLocaleRequestPrivate &other,
                                   CreateBotLocaleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
