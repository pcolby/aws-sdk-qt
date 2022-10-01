// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATETEMPLATEREQUEST_P_H
#define QTAWS_GENERATETEMPLATEREQUEST_P_H

#include "smsrequest_p.h"
#include "generatetemplaterequest.h"

namespace QtAws {
namespace Sms {

class GenerateTemplateRequest;

class GenerateTemplateRequestPrivate : public SmsRequestPrivate {

public:
    GenerateTemplateRequestPrivate(const SmsRequest::Action action,
                                   GenerateTemplateRequest * const q);
    GenerateTemplateRequestPrivate(const GenerateTemplateRequestPrivate &other,
                                   GenerateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateTemplateRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
