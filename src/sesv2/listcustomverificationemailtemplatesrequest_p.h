// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESREQUEST_P_H
#define QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESREQUEST_P_H

#include "sesv2request_p.h"
#include "listcustomverificationemailtemplatesrequest.h"

namespace QtAws {
namespace SESv2 {

class ListCustomVerificationEmailTemplatesRequest;

class ListCustomVerificationEmailTemplatesRequestPrivate : public SESv2RequestPrivate {

public:
    ListCustomVerificationEmailTemplatesRequestPrivate(const SESv2Request::Action action,
                                   ListCustomVerificationEmailTemplatesRequest * const q);
    ListCustomVerificationEmailTemplatesRequestPrivate(const ListCustomVerificationEmailTemplatesRequestPrivate &other,
                                   ListCustomVerificationEmailTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomVerificationEmailTemplatesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
