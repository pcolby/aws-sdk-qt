// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLACKCHANNELCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATESLACKCHANNELCONFIGURATIONRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class UpdateSlackChannelConfigurationResponse;

class UpdateSlackChannelConfigurationResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit UpdateSlackChannelConfigurationResponsePrivate(UpdateSlackChannelConfigurationResponse * const q);

    void parseUpdateSlackChannelConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSlackChannelConfigurationResponse)
    Q_DISABLE_COPY(UpdateSlackChannelConfigurationResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
