// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAVAILABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAVAILABILITYCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteAvailabilityConfigurationResponse;

class DeleteAvailabilityConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteAvailabilityConfigurationResponsePrivate(DeleteAvailabilityConfigurationResponse * const q);

    void parseDeleteAvailabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(DeleteAvailabilityConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
