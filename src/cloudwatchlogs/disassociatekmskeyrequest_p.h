// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEKMSKEYREQUEST_P_H
#define QTAWS_DISASSOCIATEKMSKEYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "disassociatekmskeyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DisassociateKmsKeyRequest;

class DisassociateKmsKeyRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DisassociateKmsKeyRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DisassociateKmsKeyRequest * const q);
    DisassociateKmsKeyRequestPrivate(const DisassociateKmsKeyRequestPrivate &other,
                                   DisassociateKmsKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateKmsKeyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
