// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRACKERRESPONSE_P_H
#define QTAWS_DELETETRACKERRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DeleteTrackerResponse;

class DeleteTrackerResponsePrivate : public LocationResponsePrivate {

public:

    explicit DeleteTrackerResponsePrivate(DeleteTrackerResponse * const q);

    void parseDeleteTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrackerResponse)
    Q_DISABLE_COPY(DeleteTrackerResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
