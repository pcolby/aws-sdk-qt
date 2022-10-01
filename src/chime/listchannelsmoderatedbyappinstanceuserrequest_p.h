// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "listchannelsmoderatedbyappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelsModeratedByAppInstanceUserRequest;

class ListChannelsModeratedByAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    ListChannelsModeratedByAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   ListChannelsModeratedByAppInstanceUserRequest * const q);
    ListChannelsModeratedByAppInstanceUserRequestPrivate(const ListChannelsModeratedByAppInstanceUserRequestPrivate &other,
                                   ListChannelsModeratedByAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelsModeratedByAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
