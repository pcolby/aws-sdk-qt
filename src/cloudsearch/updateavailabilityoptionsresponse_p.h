// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYOPTIONSRESPONSE_P_H
#define QTAWS_UPDATEAVAILABILITYOPTIONSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class UpdateAvailabilityOptionsResponse;

class UpdateAvailabilityOptionsResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit UpdateAvailabilityOptionsResponsePrivate(UpdateAvailabilityOptionsResponse * const q);

    void parseUpdateAvailabilityOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAvailabilityOptionsResponse)
    Q_DISABLE_COPY(UpdateAvailabilityOptionsResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
