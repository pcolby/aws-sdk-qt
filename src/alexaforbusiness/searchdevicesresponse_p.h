// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDEVICESRESPONSE_P_H
#define QTAWS_SEARCHDEVICESRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchDevicesResponse;

class SearchDevicesResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchDevicesResponsePrivate(SearchDevicesResponse * const q);

    void parseSearchDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchDevicesResponse)
    Q_DISABLE_COPY(SearchDevicesResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
