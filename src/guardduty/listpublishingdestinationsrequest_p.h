// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHINGDESTINATIONSREQUEST_P_H
#define QTAWS_LISTPUBLISHINGDESTINATIONSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "listpublishingdestinationsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListPublishingDestinationsRequest;

class ListPublishingDestinationsRequestPrivate : public GuardDutyRequestPrivate {

public:
    ListPublishingDestinationsRequestPrivate(const GuardDutyRequest::Action action,
                                   ListPublishingDestinationsRequest * const q);
    ListPublishingDestinationsRequestPrivate(const ListPublishingDestinationsRequestPrivate &other,
                                   ListPublishingDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPublishingDestinationsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
