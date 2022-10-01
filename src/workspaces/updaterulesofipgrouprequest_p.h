// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESOFIPGROUPREQUEST_P_H
#define QTAWS_UPDATERULESOFIPGROUPREQUEST_P_H

#include "workspacesrequest_p.h"
#include "updaterulesofipgrouprequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateRulesOfIpGroupRequest;

class UpdateRulesOfIpGroupRequestPrivate : public WorkSpacesRequestPrivate {

public:
    UpdateRulesOfIpGroupRequestPrivate(const WorkSpacesRequest::Action action,
                                   UpdateRulesOfIpGroupRequest * const q);
    UpdateRulesOfIpGroupRequestPrivate(const UpdateRulesOfIpGroupRequestPrivate &other,
                                   UpdateRulesOfIpGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRulesOfIpGroupRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
