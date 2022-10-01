// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "deletecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class DeleteCustomVerificationEmailTemplateRequest;

class DeleteCustomVerificationEmailTemplateRequestPrivate : public SesRequestPrivate {

public:
    DeleteCustomVerificationEmailTemplateRequestPrivate(const SesRequest::Action action,
                                   DeleteCustomVerificationEmailTemplateRequest * const q);
    DeleteCustomVerificationEmailTemplateRequestPrivate(const DeleteCustomVerificationEmailTemplateRequestPrivate &other,
                                   DeleteCustomVerificationEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
