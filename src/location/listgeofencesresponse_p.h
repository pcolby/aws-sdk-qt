// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCESRESPONSE_P_H
#define QTAWS_LISTGEOFENCESRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListGeofencesResponse;

class ListGeofencesResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListGeofencesResponsePrivate(ListGeofencesResponse * const q);

    void parseListGeofencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGeofencesResponse)
    Q_DISABLE_COPY(ListGeofencesResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
