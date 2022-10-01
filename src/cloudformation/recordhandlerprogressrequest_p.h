// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDHANDLERPROGRESSREQUEST_P_H
#define QTAWS_RECORDHANDLERPROGRESSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "recordhandlerprogressrequest.h"

namespace QtAws {
namespace CloudFormation {

class RecordHandlerProgressRequest;

class RecordHandlerProgressRequestPrivate : public CloudFormationRequestPrivate {

public:
    RecordHandlerProgressRequestPrivate(const CloudFormationRequest::Action action,
                                   RecordHandlerProgressRequest * const q);
    RecordHandlerProgressRequestPrivate(const RecordHandlerProgressRequestPrivate &other,
                                   RecordHandlerProgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecordHandlerProgressRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
