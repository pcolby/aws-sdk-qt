// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADSHAREREQUEST_P_H
#define QTAWS_DELETEWORKLOADSHAREREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "deleteworkloadsharerequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadShareRequest;

class DeleteWorkloadShareRequestPrivate : public WellArchitectedRequestPrivate {

public:
    DeleteWorkloadShareRequestPrivate(const WellArchitectedRequest::Action action,
                                   DeleteWorkloadShareRequest * const q);
    DeleteWorkloadShareRequestPrivate(const DeleteWorkloadShareRequestPrivate &other,
                                   DeleteWorkloadShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkloadShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
