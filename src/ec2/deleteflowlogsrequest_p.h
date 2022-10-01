// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWLOGSREQUEST_P_H
#define QTAWS_DELETEFLOWLOGSREQUEST_P_H

#include "ec2request_p.h"
#include "deleteflowlogsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteFlowLogsRequest;

class DeleteFlowLogsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteFlowLogsRequestPrivate(const Ec2Request::Action action,
                                   DeleteFlowLogsRequest * const q);
    DeleteFlowLogsRequestPrivate(const DeleteFlowLogsRequestPrivate &other,
                                   DeleteFlowLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFlowLogsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
