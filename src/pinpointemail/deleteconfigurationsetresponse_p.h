// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONSETRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteConfigurationSetResponse;

class DeleteConfigurationSetResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit DeleteConfigurationSetResponsePrivate(DeleteConfigurationSetResponse * const q);

    void parseDeleteConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
