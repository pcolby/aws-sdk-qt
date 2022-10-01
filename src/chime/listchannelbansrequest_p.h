// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSREQUEST_P_H
#define QTAWS_LISTCHANNELBANSREQUEST_P_H

#include "chimerequest_p.h"
#include "listchannelbansrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelBansRequest;

class ListChannelBansRequestPrivate : public ChimeRequestPrivate {

public:
    ListChannelBansRequestPrivate(const ChimeRequest::Action action,
                                   ListChannelBansRequest * const q);
    ListChannelBansRequestPrivate(const ListChannelBansRequestPrivate &other,
                                   ListChannelBansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelBansRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
