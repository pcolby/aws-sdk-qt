// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDRESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetSendingEnabledResponse;

class UpdateConfigurationSetSendingEnabledResponsePrivate : public SesResponsePrivate {

public:

    explicit UpdateConfigurationSetSendingEnabledResponsePrivate(UpdateConfigurationSetSendingEnabledResponse * const q);

    void parseUpdateConfigurationSetSendingEnabledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetSendingEnabledResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetSendingEnabledResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
