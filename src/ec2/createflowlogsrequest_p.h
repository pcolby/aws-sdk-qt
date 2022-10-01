// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWLOGSREQUEST_P_H
#define QTAWS_CREATEFLOWLOGSREQUEST_P_H

#include "ec2request_p.h"
#include "createflowlogsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateFlowLogsRequest;

class CreateFlowLogsRequestPrivate : public Ec2RequestPrivate {

public:
    CreateFlowLogsRequestPrivate(const Ec2Request::Action action,
                                   CreateFlowLogsRequest * const q);
    CreateFlowLogsRequestPrivate(const CreateFlowLogsRequestPrivate &other,
                                   CreateFlowLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFlowLogsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
