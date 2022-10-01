// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "updatecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class UpdateCustomVerificationEmailTemplateRequest;

class UpdateCustomVerificationEmailTemplateRequestPrivate : public SesRequestPrivate {

public:
    UpdateCustomVerificationEmailTemplateRequestPrivate(const SesRequest::Action action,
                                   UpdateCustomVerificationEmailTemplateRequest * const q);
    UpdateCustomVerificationEmailTemplateRequestPrivate(const UpdateCustomVerificationEmailTemplateRequestPrivate &other,
                                   UpdateCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
