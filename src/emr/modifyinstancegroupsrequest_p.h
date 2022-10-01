// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEGROUPSREQUEST_P_H
#define QTAWS_MODIFYINSTANCEGROUPSREQUEST_P_H

#include "emrrequest_p.h"
#include "modifyinstancegroupsrequest.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceGroupsRequest;

class ModifyInstanceGroupsRequestPrivate : public EmrRequestPrivate {

public:
    ModifyInstanceGroupsRequestPrivate(const EmrRequest::Action action,
                                   ModifyInstanceGroupsRequest * const q);
    ModifyInstanceGroupsRequestPrivate(const ModifyInstanceGroupsRequestPrivate &other,
                                   ModifyInstanceGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceGroupsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
