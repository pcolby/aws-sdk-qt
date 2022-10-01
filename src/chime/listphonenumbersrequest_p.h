// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSREQUEST_P_H
#define QTAWS_LISTPHONENUMBERSREQUEST_P_H

#include "chimerequest_p.h"
#include "listphonenumbersrequest.h"

namespace QtAws {
namespace Chime {

class ListPhoneNumbersRequest;

class ListPhoneNumbersRequestPrivate : public ChimeRequestPrivate {

public:
    ListPhoneNumbersRequestPrivate(const ChimeRequest::Action action,
                                   ListPhoneNumbersRequest * const q);
    ListPhoneNumbersRequestPrivate(const ListPhoneNumbersRequestPrivate &other,
                                   ListPhoneNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
