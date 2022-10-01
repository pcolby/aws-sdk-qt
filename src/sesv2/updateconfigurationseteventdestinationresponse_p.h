// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class UpdateConfigurationSetEventDestinationResponse;

class UpdateConfigurationSetEventDestinationResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit UpdateConfigurationSetEventDestinationResponsePrivate(UpdateConfigurationSetEventDestinationResponse * const q);

    void parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetEventDestinationResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
