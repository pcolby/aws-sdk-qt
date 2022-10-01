// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEKMSKEYREQUEST_P_H
#define QTAWS_ASSOCIATEKMSKEYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "associatekmskeyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class AssociateKmsKeyRequest;

class AssociateKmsKeyRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    AssociateKmsKeyRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   AssociateKmsKeyRequest * const q);
    AssociateKmsKeyRequestPrivate(const AssociateKmsKeyRequestPrivate &other,
                                   AssociateKmsKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateKmsKeyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
