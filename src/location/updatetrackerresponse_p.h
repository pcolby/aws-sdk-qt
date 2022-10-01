// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRACKERRESPONSE_P_H
#define QTAWS_UPDATETRACKERRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class UpdateTrackerResponse;

class UpdateTrackerResponsePrivate : public LocationResponsePrivate {

public:

    explicit UpdateTrackerResponsePrivate(UpdateTrackerResponse * const q);

    void parseUpdateTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrackerResponse)
    Q_DISABLE_COPY(UpdateTrackerResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
