// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTREQUEST_P_H
#define QTAWS_GETBOTREQUEST_P_H

#include "chimerequest_p.h"
#include "getbotrequest.h"

namespace QtAws {
namespace Chime {

class GetBotRequest;

class GetBotRequestPrivate : public ChimeRequestPrivate {

public:
    GetBotRequestPrivate(const ChimeRequest::Action action,
                                   GetBotRequest * const q);
    GetBotRequestPrivate(const GetBotRequestPrivate &other,
                                   GetBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
