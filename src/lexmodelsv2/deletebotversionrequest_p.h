// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTVERSIONREQUEST_P_H
#define QTAWS_DELETEBOTVERSIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deletebotversionrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotVersionRequest;

class DeleteBotVersionRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteBotVersionRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteBotVersionRequest * const q);
    DeleteBotVersionRequestPrivate(const DeleteBotVersionRequestPrivate &other,
                                   DeleteBotVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotVersionRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
