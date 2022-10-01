// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESREQUEST_P_H
#define QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESREQUEST_P_H

#include "chimerequest_p.h"
#include "listsupportedphonenumbercountriesrequest.h"

namespace QtAws {
namespace Chime {

class ListSupportedPhoneNumberCountriesRequest;

class ListSupportedPhoneNumberCountriesRequestPrivate : public ChimeRequestPrivate {

public:
    ListSupportedPhoneNumberCountriesRequestPrivate(const ChimeRequest::Action action,
                                   ListSupportedPhoneNumberCountriesRequest * const q);
    ListSupportedPhoneNumberCountriesRequestPrivate(const ListSupportedPhoneNumberCountriesRequestPrivate &other,
                                   ListSupportedPhoneNumberCountriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSupportedPhoneNumberCountriesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
