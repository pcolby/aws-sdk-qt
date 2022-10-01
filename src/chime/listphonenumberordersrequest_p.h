// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERORDERSREQUEST_P_H
#define QTAWS_LISTPHONENUMBERORDERSREQUEST_P_H

#include "chimerequest_p.h"
#include "listphonenumberordersrequest.h"

namespace QtAws {
namespace Chime {

class ListPhoneNumberOrdersRequest;

class ListPhoneNumberOrdersRequestPrivate : public ChimeRequestPrivate {

public:
    ListPhoneNumberOrdersRequestPrivate(const ChimeRequest::Action action,
                                   ListPhoneNumberOrdersRequest * const q);
    ListPhoneNumberOrdersRequestPrivate(const ListPhoneNumberOrdersRequestPrivate &other,
                                   ListPhoneNumberOrdersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumberOrdersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
