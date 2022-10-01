// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETREQUEST_P_H
#define QTAWS_CREATECHANGESETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "createchangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateChangeSetRequest;

class CreateChangeSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    CreateChangeSetRequestPrivate(const CloudFormationRequest::Action action,
                                   CreateChangeSetRequest * const q);
    CreateChangeSetRequestPrivate(const CreateChangeSetRequestPrivate &other,
                                   CreateChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
