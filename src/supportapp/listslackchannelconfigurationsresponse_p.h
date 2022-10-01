// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKCHANNELCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTSLACKCHANNELCONFIGURATIONSRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class ListSlackChannelConfigurationsResponse;

class ListSlackChannelConfigurationsResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit ListSlackChannelConfigurationsResponsePrivate(ListSlackChannelConfigurationsResponse * const q);

    void parseListSlackChannelConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSlackChannelConfigurationsResponse)
    Q_DISABLE_COPY(ListSlackChannelConfigurationsResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
