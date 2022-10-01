// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "updateemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateEmailTemplateRequest;

class UpdateEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    UpdateEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   UpdateEmailTemplateRequest * const q);
    UpdateEmailTemplateRequestPrivate(const UpdateEmailTemplateRequestPrivate &other,
                                   UpdateEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
