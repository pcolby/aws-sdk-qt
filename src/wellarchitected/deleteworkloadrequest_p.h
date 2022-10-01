// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADREQUEST_P_H
#define QTAWS_DELETEWORKLOADREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "deleteworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadRequest;

class DeleteWorkloadRequestPrivate : public WellArchitectedRequestPrivate {

public:
    DeleteWorkloadRequestPrivate(const WellArchitectedRequest::Action action,
                                   DeleteWorkloadRequest * const q);
    DeleteWorkloadRequestPrivate(const DeleteWorkloadRequestPrivate &other,
                                   DeleteWorkloadRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
