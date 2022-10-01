// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKSETREQUEST_P_H
#define QTAWS_CREATESTACKSETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "createstacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackSetRequest;

class CreateStackSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    CreateStackSetRequestPrivate(const CloudFormationRequest::Action action,
                                   CreateStackSetRequest * const q);
    CreateStackSetRequestPrivate(const CreateStackSetRequestPrivate &other,
                                   CreateStackSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
