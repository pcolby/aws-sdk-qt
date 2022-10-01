// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNEYSRESPONSE_P_H
#define QTAWS_LISTJOURNEYSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class ListJourneysResponse;

class ListJourneysResponsePrivate : public PinpointResponsePrivate {

public:

    explicit ListJourneysResponsePrivate(ListJourneysResponse * const q);

    void parseListJourneysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJourneysResponse)
    Q_DISABLE_COPY(ListJourneysResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
