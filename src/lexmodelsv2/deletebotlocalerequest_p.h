// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTLOCALEREQUEST_P_H
#define QTAWS_DELETEBOTLOCALEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deletebotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotLocaleRequest;

class DeleteBotLocaleRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteBotLocaleRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteBotLocaleRequest * const q);
    DeleteBotLocaleRequestPrivate(const DeleteBotLocaleRequestPrivate &other,
                                   DeleteBotLocaleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
