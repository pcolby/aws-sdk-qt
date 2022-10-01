// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATETEMPLATEREQUEST_P_H
#define QTAWS_VALIDATETEMPLATEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "validatetemplaterequest.h"

namespace QtAws {
namespace CloudFormation {

class ValidateTemplateRequest;

class ValidateTemplateRequestPrivate : public CloudFormationRequestPrivate {

public:
    ValidateTemplateRequestPrivate(const CloudFormationRequest::Action action,
                                   ValidateTemplateRequest * const q);
    ValidateTemplateRequestPrivate(const ValidateTemplateRequestPrivate &other,
                                   ValidateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateTemplateRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
