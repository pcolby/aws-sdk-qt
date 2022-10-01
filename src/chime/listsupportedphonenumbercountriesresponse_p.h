// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESRESPONSE_P_H
#define QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListSupportedPhoneNumberCountriesResponse;

class ListSupportedPhoneNumberCountriesResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListSupportedPhoneNumberCountriesResponsePrivate(ListSupportedPhoneNumberCountriesResponse * const q);

    void parseListSupportedPhoneNumberCountriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSupportedPhoneNumberCountriesResponse)
    Q_DISABLE_COPY(ListSupportedPhoneNumberCountriesResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
