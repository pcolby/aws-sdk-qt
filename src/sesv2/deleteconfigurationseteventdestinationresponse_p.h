// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteConfigurationSetEventDestinationResponse;

class DeleteConfigurationSetEventDestinationResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteConfigurationSetEventDestinationResponsePrivate(DeleteConfigurationSetEventDestinationResponse * const q);

    void parseDeleteConfigurationSetEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetEventDestinationResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
