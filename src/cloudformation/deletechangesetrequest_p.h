// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANGESETREQUEST_P_H
#define QTAWS_DELETECHANGESETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "deletechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteChangeSetRequest;

class DeleteChangeSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    DeleteChangeSetRequestPrivate(const CloudFormationRequest::Action action,
                                   DeleteChangeSetRequest * const q);
    DeleteChangeSetRequestPrivate(const DeleteChangeSetRequestPrivate &other,
                                   DeleteChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
