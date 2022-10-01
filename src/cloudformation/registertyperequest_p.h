// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTYPEREQUEST_P_H
#define QTAWS_REGISTERTYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "registertyperequest.h"

namespace QtAws {
namespace CloudFormation {

class RegisterTypeRequest;

class RegisterTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    RegisterTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   RegisterTypeRequest * const q);
    RegisterTypeRequestPrivate(const RegisterTypeRequestPrivate &other,
                                   RegisterTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
