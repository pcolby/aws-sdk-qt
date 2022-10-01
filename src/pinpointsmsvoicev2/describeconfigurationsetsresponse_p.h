// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONSETSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeConfigurationSetsResponse;

class DescribeConfigurationSetsResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribeConfigurationSetsResponsePrivate(DescribeConfigurationSetsResponse * const q);

    void parseDescribeConfigurationSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationSetsResponse)
    Q_DISABLE_COPY(DescribeConfigurationSetsResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
