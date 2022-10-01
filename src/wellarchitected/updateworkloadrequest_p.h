// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADREQUEST_P_H
#define QTAWS_UPDATEWORKLOADREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "updateworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadRequest;

class UpdateWorkloadRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpdateWorkloadRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpdateWorkloadRequest * const q);
    UpdateWorkloadRequestPrivate(const UpdateWorkloadRequestPrivate &other,
                                   UpdateWorkloadRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
