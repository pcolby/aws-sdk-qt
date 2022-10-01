// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDVALIDATIONEMAILREQUEST_P_H
#define QTAWS_RESENDVALIDATIONEMAILREQUEST_P_H

#include "acmrequest_p.h"
#include "resendvalidationemailrequest.h"

namespace QtAws {
namespace Acm {

class ResendValidationEmailRequest;

class ResendValidationEmailRequestPrivate : public AcmRequestPrivate {

public:
    ResendValidationEmailRequestPrivate(const AcmRequest::Action action,
                                   ResendValidationEmailRequest * const q);
    ResendValidationEmailRequestPrivate(const ResendValidationEmailRequestPrivate &other,
                                   ResendValidationEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResendValidationEmailRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
