// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHAVAILABLEPHONENUMBERSRESPONSE_P_H
#define QTAWS_SEARCHAVAILABLEPHONENUMBERSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class SearchAvailablePhoneNumbersResponse;

class SearchAvailablePhoneNumbersResponsePrivate : public ChimeResponsePrivate {

public:

    explicit SearchAvailablePhoneNumbersResponsePrivate(SearchAvailablePhoneNumbersResponse * const q);

    void parseSearchAvailablePhoneNumbersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchAvailablePhoneNumbersResponse)
    Q_DISABLE_COPY(SearchAvailablePhoneNumbersResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
