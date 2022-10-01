// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATETYPEREQUEST_P_H
#define QTAWS_ACTIVATETYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "activatetyperequest.h"

namespace QtAws {
namespace CloudFormation {

class ActivateTypeRequest;

class ActivateTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    ActivateTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   ActivateTypeRequest * const q);
    ActivateTypeRequestPrivate(const ActivateTypeRequestPrivate &other,
                                   ActivateTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
