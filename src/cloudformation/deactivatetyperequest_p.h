// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATETYPEREQUEST_P_H
#define QTAWS_DEACTIVATETYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "deactivatetyperequest.h"

namespace QtAws {
namespace CloudFormation {

class DeactivateTypeRequest;

class DeactivateTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    DeactivateTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   DeactivateTypeRequest * const q);
    DeactivateTypeRequestPrivate(const DeactivateTypeRequestPrivate &other,
                                   DeactivateTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
