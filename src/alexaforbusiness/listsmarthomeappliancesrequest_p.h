// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMARTHOMEAPPLIANCESREQUEST_P_H
#define QTAWS_LISTSMARTHOMEAPPLIANCESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listsmarthomeappliancesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSmartHomeAppliancesRequest;

class ListSmartHomeAppliancesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListSmartHomeAppliancesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListSmartHomeAppliancesRequest * const q);
    ListSmartHomeAppliancesRequestPrivate(const ListSmartHomeAppliancesRequestPrivate &other,
                                   ListSmartHomeAppliancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSmartHomeAppliancesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
