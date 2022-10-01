// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "createcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class CreateCustomVerificationEmailTemplateRequest;

class CreateCustomVerificationEmailTemplateRequestPrivate : public SesRequestPrivate {

public:
    CreateCustomVerificationEmailTemplateRequestPrivate(const SesRequest::Action action,
                                   CreateCustomVerificationEmailTemplateRequest * const q);
    CreateCustomVerificationEmailTemplateRequestPrivate(const CreateCustomVerificationEmailTemplateRequestPrivate &other,
                                   CreateCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
