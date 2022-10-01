// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKSETREQUEST_P_H
#define QTAWS_UPDATESTACKSETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "updatestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackSetRequest;

class UpdateStackSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    UpdateStackSetRequestPrivate(const CloudFormationRequest::Action action,
                                   UpdateStackSetRequest * const q);
    UpdateStackSetRequestPrivate(const UpdateStackSetRequestPrivate &other,
                                   UpdateStackSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
