// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHTYPEREQUEST_P_H
#define QTAWS_PUBLISHTYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "publishtyperequest.h"

namespace QtAws {
namespace CloudFormation {

class PublishTypeRequest;

class PublishTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    PublishTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   PublishTypeRequest * const q);
    PublishTypeRequestPrivate(const PublishTypeRequestPrivate &other,
                                   PublishTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
