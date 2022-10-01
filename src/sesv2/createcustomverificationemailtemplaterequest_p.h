// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "createcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class CreateCustomVerificationEmailTemplateRequest;

class CreateCustomVerificationEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    CreateCustomVerificationEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   CreateCustomVerificationEmailTemplateRequest * const q);
    CreateCustomVerificationEmailTemplateRequestPrivate(const CreateCustomVerificationEmailTemplateRequestPrivate &other,
                                   CreateCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
