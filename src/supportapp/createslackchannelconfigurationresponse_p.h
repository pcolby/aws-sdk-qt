// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLACKCHANNELCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATESLACKCHANNELCONFIGURATIONRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class CreateSlackChannelConfigurationResponse;

class CreateSlackChannelConfigurationResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit CreateSlackChannelConfigurationResponsePrivate(CreateSlackChannelConfigurationResponse * const q);

    void parseCreateSlackChannelConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSlackChannelConfigurationResponse)
    Q_DISABLE_COPY(CreateSlackChannelConfigurationResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
