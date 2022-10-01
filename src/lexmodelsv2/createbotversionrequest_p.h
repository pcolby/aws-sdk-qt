// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONREQUEST_P_H
#define QTAWS_CREATEBOTVERSIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createbotversionrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotVersionRequest;

class CreateBotVersionRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateBotVersionRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateBotVersionRequest * const q);
    CreateBotVersionRequestPrivate(const CreateBotVersionRequestPrivate &other,
                                   CreateBotVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotVersionRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
