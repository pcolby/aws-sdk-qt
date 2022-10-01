// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetEventDestinationResponse;

class DeleteConfigurationSetEventDestinationResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteConfigurationSetEventDestinationResponsePrivate(DeleteConfigurationSetEventDestinationResponse * const q);

    void parseDeleteConfigurationSetEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetEventDestinationResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
