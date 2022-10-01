// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTREQUEST_P_H
#define QTAWS_DELETEBOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deletebotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotRequest;

class DeleteBotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteBotRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteBotRequest * const q);
    DeleteBotRequestPrivate(const DeleteBotRequestPrivate &other,
                                   DeleteBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
