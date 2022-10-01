// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADSHAREREQUEST_P_H
#define QTAWS_UPDATEWORKLOADSHAREREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "updateworkloadsharerequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadShareRequest;

class UpdateWorkloadShareRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpdateWorkloadShareRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpdateWorkloadShareRequest * const q);
    UpdateWorkloadShareRequestPrivate(const UpdateWorkloadShareRequestPrivate &other,
                                   UpdateWorkloadShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkloadShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
