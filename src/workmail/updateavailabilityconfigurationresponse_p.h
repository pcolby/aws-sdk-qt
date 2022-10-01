// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEAVAILABILITYCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class UpdateAvailabilityConfigurationResponse;

class UpdateAvailabilityConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit UpdateAvailabilityConfigurationResponsePrivate(UpdateAvailabilityConfigurationResponse * const q);

    void parseUpdateAvailabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(UpdateAvailabilityConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
