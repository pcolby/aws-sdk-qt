// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESREQUEST_P_H
#define QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESREQUEST_P_H

#include "sesrequest_p.h"
#include "listcustomverificationemailtemplatesrequest.h"

namespace QtAws {
namespace Ses {

class ListCustomVerificationEmailTemplatesRequest;

class ListCustomVerificationEmailTemplatesRequestPrivate : public SesRequestPrivate {

public:
    ListCustomVerificationEmailTemplatesRequestPrivate(const SesRequest::Action action,
                                   ListCustomVerificationEmailTemplatesRequest * const q);
    ListCustomVerificationEmailTemplatesRequestPrivate(const ListCustomVerificationEmailTemplatesRequestPrivate &other,
                                   ListCustomVerificationEmailTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomVerificationEmailTemplatesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
