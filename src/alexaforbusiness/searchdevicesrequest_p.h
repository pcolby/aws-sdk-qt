// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDEVICESREQUEST_P_H
#define QTAWS_SEARCHDEVICESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchdevicesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchDevicesRequest;

class SearchDevicesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchDevicesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchDevicesRequest * const q);
    SearchDevicesRequestPrivate(const SearchDevicesRequestPrivate &other,
                                   SearchDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchDevicesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
