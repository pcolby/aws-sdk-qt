// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeDevicePolicyConfigurationResponse;

class DescribeDevicePolicyConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeDevicePolicyConfigurationResponsePrivate(DescribeDevicePolicyConfigurationResponse * const q);

    void parseDescribeDevicePolicyConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDevicePolicyConfigurationResponse)
    Q_DISABLE_COPY(DescribeDevicePolicyConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
