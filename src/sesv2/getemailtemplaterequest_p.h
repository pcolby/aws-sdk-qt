// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILTEMPLATEREQUEST_P_H
#define QTAWS_GETEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "getemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class GetEmailTemplateRequest;

class GetEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    GetEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   GetEmailTemplateRequest * const q);
    GetEmailTemplateRequestPrivate(const GetEmailTemplateRequestPrivate &other,
                                   GetEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
