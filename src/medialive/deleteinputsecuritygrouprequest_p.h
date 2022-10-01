// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTSECURITYGROUPREQUEST_P_H
#define QTAWS_DELETEINPUTSECURITYGROUPREQUEST_P_H

#include "medialiverequest_p.h"
#include "deleteinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteInputSecurityGroupRequest;

class DeleteInputSecurityGroupRequestPrivate : public MediaLiveRequestPrivate {

public:
    DeleteInputSecurityGroupRequestPrivate(const MediaLiveRequest::Action action,
                                   DeleteInputSecurityGroupRequest * const q);
    DeleteInputSecurityGroupRequestPrivate(const DeleteInputSecurityGroupRequestPrivate &other,
                                   DeleteInputSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
