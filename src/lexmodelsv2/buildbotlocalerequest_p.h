// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDBOTLOCALEREQUEST_P_H
#define QTAWS_BUILDBOTLOCALEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "buildbotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class BuildBotLocaleRequest;

class BuildBotLocaleRequestPrivate : public LexModelsV2RequestPrivate {

public:
    BuildBotLocaleRequestPrivate(const LexModelsV2Request::Action action,
                                   BuildBotLocaleRequest * const q);
    BuildBotLocaleRequestPrivate(const BuildBotLocaleRequestPrivate &other,
                                   BuildBotLocaleRequest * const q);

private:
    Q_DECLARE_PUBLIC(BuildBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
