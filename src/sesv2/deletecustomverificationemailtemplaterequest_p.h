// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "deletecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteCustomVerificationEmailTemplateRequest;

class DeleteCustomVerificationEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteCustomVerificationEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   DeleteCustomVerificationEmailTemplateRequest * const q);
    DeleteCustomVerificationEmailTemplateRequestPrivate(const DeleteCustomVerificationEmailTemplateRequestPrivate &other,
                                   DeleteCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
