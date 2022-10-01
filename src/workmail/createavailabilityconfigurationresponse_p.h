// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAVAILABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEAVAILABILITYCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class CreateAvailabilityConfigurationResponse;

class CreateAvailabilityConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit CreateAvailabilityConfigurationResponsePrivate(CreateAvailabilityConfigurationResponse * const q);

    void parseCreateAvailabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(CreateAvailabilityConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
