// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGSREQUEST_P_H
#define QTAWS_LISTOFFERINGSREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "listofferingsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListOfferingsRequest;

class ListOfferingsRequestPrivate : public MediaConnectRequestPrivate {

public:
    ListOfferingsRequestPrivate(const MediaConnectRequest::Action action,
                                   ListOfferingsRequest * const q);
    ListOfferingsRequestPrivate(const ListOfferingsRequestPrivate &other,
                                   ListOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOfferingsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
