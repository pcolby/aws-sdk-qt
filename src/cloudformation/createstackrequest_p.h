// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKREQUEST_P_H
#define QTAWS_CREATESTACKREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "createstackrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackRequest;

class CreateStackRequestPrivate : public CloudFormationRequestPrivate {

public:
    CreateStackRequestPrivate(const CloudFormationRequest::Action action,
                                   CreateStackRequest * const q);
    CreateStackRequestPrivate(const CreateStackRequestPrivate &other,
                                   CreateStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
