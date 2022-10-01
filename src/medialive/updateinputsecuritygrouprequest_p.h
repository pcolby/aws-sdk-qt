// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTSECURITYGROUPREQUEST_P_H
#define QTAWS_UPDATEINPUTSECURITYGROUPREQUEST_P_H

#include "medialiverequest_p.h"
#include "updateinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputSecurityGroupRequest;

class UpdateInputSecurityGroupRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateInputSecurityGroupRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateInputSecurityGroupRequest * const q);
    UpdateInputSecurityGroupRequestPrivate(const UpdateInputSecurityGroupRequestPrivate &other,
                                   UpdateInputSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
