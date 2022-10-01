// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "getcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class GetCustomVerificationEmailTemplateRequest;

class GetCustomVerificationEmailTemplateRequestPrivate : public SesRequestPrivate {

public:
    GetCustomVerificationEmailTemplateRequestPrivate(const SesRequest::Action action,
                                   GetCustomVerificationEmailTemplateRequest * const q);
    GetCustomVerificationEmailTemplateRequestPrivate(const GetCustomVerificationEmailTemplateRequestPrivate &other,
                                   GetCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
