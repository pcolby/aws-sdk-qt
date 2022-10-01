// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGSREQUEST_P_H
#define QTAWS_LISTOFFERINGSREQUEST_P_H

#include "medialiverequest_p.h"
#include "listofferingsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListOfferingsRequest;

class ListOfferingsRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListOfferingsRequestPrivate(const MediaLiveRequest::Action action,
                                   ListOfferingsRequest * const q);
    ListOfferingsRequestPrivate(const ListOfferingsRequestPrivate &other,
                                   ListOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOfferingsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
