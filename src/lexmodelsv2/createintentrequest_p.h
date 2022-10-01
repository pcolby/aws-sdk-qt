// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTREQUEST_P_H
#define QTAWS_CREATEINTENTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateIntentRequest;

class CreateIntentRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateIntentRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateIntentRequest * const q);
    CreateIntentRequestPrivate(const CreateIntentRequestPrivate &other,
                                   CreateIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
