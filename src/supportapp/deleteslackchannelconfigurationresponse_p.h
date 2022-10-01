// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKCHANNELCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETESLACKCHANNELCONFIGURATIONRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackChannelConfigurationResponse;

class DeleteSlackChannelConfigurationResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit DeleteSlackChannelConfigurationResponsePrivate(DeleteSlackChannelConfigurationResponse * const q);

    void parseDeleteSlackChannelConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSlackChannelConfigurationResponse)
    Q_DISABLE_COPY(DeleteSlackChannelConfigurationResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
