// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGEREQUEST_P_H
#define QTAWS_GETCHANNELMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "getchannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class GetChannelMessageRequest;

class GetChannelMessageRequestPrivate : public ChimeRequestPrivate {

public:
    GetChannelMessageRequestPrivate(const ChimeRequest::Action action,
                                   GetChannelMessageRequest * const q);
    GetChannelMessageRequestPrivate(const GetChannelMessageRequestPrivate &other,
                                   GetChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
