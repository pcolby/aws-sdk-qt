// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCONFIGURATIONREQUEST_P_H
#define QTAWS_GETGROUPCONFIGURATIONREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "getgroupconfigurationrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupConfigurationRequest;

class GetGroupConfigurationRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    GetGroupConfigurationRequestPrivate(const ResourceGroupsRequest::Action action,
                                   GetGroupConfigurationRequest * const q);
    GetGroupConfigurationRequestPrivate(const GetGroupConfigurationRequestPrivate &other,
                                   GetGroupConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupConfigurationRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
