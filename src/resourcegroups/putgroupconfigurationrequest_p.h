// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTGROUPCONFIGURATIONREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "putgroupconfigurationrequest.h"

namespace QtAws {
namespace ResourceGroups {

class PutGroupConfigurationRequest;

class PutGroupConfigurationRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    PutGroupConfigurationRequestPrivate(const ResourceGroupsRequest::Action action,
                                   PutGroupConfigurationRequest * const q);
    PutGroupConfigurationRequestPrivate(const PutGroupConfigurationRequestPrivate &other,
                                   PutGroupConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutGroupConfigurationRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
