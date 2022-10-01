// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTSECURITYGROUPREQUEST_P_H
#define QTAWS_CREATEINPUTSECURITYGROUPREQUEST_P_H

#include "medialiverequest_p.h"
#include "createinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class CreateInputSecurityGroupRequest;

class CreateInputSecurityGroupRequestPrivate : public MediaLiveRequestPrivate {

public:
    CreateInputSecurityGroupRequestPrivate(const MediaLiveRequest::Action action,
                                   CreateInputSecurityGroupRequest * const q);
    CreateInputSecurityGroupRequestPrivate(const CreateInputSecurityGroupRequestPrivate &other,
                                   CreateInputSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
