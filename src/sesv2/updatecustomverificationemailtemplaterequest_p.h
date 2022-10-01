// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "updatecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateCustomVerificationEmailTemplateRequest;

class UpdateCustomVerificationEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    UpdateCustomVerificationEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   UpdateCustomVerificationEmailTemplateRequest * const q);
    UpdateCustomVerificationEmailTemplateRequestPrivate(const UpdateCustomVerificationEmailTemplateRequestPrivate &other,
                                   UpdateCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
