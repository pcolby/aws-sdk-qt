// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "getcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class GetCustomVerificationEmailTemplateRequest;

class GetCustomVerificationEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    GetCustomVerificationEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   GetCustomVerificationEmailTemplateRequest * const q);
    GetCustomVerificationEmailTemplateRequestPrivate(const GetCustomVerificationEmailTemplateRequestPrivate &other,
                                   GetCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
