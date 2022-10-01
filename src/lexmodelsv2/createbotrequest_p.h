// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTREQUEST_P_H
#define QTAWS_CREATEBOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createbotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotRequest;

class CreateBotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateBotRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateBotRequest * const q);
    CreateBotRequestPrivate(const CreateBotRequestPrivate &other,
                                   CreateBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
