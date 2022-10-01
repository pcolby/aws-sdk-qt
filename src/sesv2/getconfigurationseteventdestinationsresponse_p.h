// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSRESPONSE_P_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetConfigurationSetEventDestinationsResponse;

class GetConfigurationSetEventDestinationsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetConfigurationSetEventDestinationsResponsePrivate(GetConfigurationSetEventDestinationsResponse * const q);

    void parseGetConfigurationSetEventDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetEventDestinationsResponse)
    Q_DISABLE_COPY(GetConfigurationSetEventDestinationsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
