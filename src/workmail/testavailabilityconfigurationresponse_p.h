// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAVAILABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_TESTAVAILABILITYCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class TestAvailabilityConfigurationResponse;

class TestAvailabilityConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit TestAvailabilityConfigurationResponsePrivate(TestAvailabilityConfigurationResponse * const q);

    void parseTestAvailabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(TestAvailabilityConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
