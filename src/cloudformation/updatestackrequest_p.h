// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKREQUEST_P_H
#define QTAWS_UPDATESTACKREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "updatestackrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackRequest;

class UpdateStackRequestPrivate : public CloudFormationRequestPrivate {

public:
    UpdateStackRequestPrivate(const CloudFormationRequest::Action action,
                                   UpdateStackRequest * const q);
    UpdateStackRequestPrivate(const UpdateStackRequestPrivate &other,
                                   UpdateStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
