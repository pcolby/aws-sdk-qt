// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILTEMPLATESREQUEST_P_H
#define QTAWS_LISTEMAILTEMPLATESREQUEST_P_H

#include "sesv2request_p.h"
#include "listemailtemplatesrequest.h"

namespace QtAws {
namespace SESv2 {

class ListEmailTemplatesRequest;

class ListEmailTemplatesRequestPrivate : public SESv2RequestPrivate {

public:
    ListEmailTemplatesRequestPrivate(const SESv2Request::Action action,
                                   ListEmailTemplatesRequest * const q);
    ListEmailTemplatesRequestPrivate(const ListEmailTemplatesRequestPrivate &other,
                                   ListEmailTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEmailTemplatesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
