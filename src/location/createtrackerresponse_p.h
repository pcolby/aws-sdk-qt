// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRACKERRESPONSE_P_H
#define QTAWS_CREATETRACKERRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CreateTrackerResponse;

class CreateTrackerResponsePrivate : public LocationResponsePrivate {

public:

    explicit CreateTrackerResponsePrivate(CreateTrackerResponse * const q);

    void parseCreateTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrackerResponse)
    Q_DISABLE_COPY(CreateTrackerResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
