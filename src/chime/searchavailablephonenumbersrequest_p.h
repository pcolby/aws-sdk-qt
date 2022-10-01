// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_P_H
#define QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_P_H

#include "chimerequest_p.h"
#include "searchavailablephonenumbersrequest.h"

namespace QtAws {
namespace Chime {

class SearchAvailablePhoneNumbersRequest;

class SearchAvailablePhoneNumbersRequestPrivate : public ChimeRequestPrivate {

public:
    SearchAvailablePhoneNumbersRequestPrivate(const ChimeRequest::Action action,
                                   SearchAvailablePhoneNumbersRequest * const q);
    SearchAvailablePhoneNumbersRequestPrivate(const SearchAvailablePhoneNumbersRequestPrivate &other,
                                   SearchAvailablePhoneNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchAvailablePhoneNumbersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
