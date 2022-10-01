// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKSETREQUEST_P_H
#define QTAWS_DELETESTACKSETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "deletestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackSetRequest;

class DeleteStackSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    DeleteStackSetRequestPrivate(const CloudFormationRequest::Action action,
                                   DeleteStackSetRequest * const q);
    DeleteStackSetRequestPrivate(const DeleteStackSetRequestPrivate &other,
                                   DeleteStackSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
