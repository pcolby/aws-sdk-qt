// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class UpdateDevicePolicyConfigurationResponse;

class UpdateDevicePolicyConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit UpdateDevicePolicyConfigurationResponsePrivate(UpdateDevicePolicyConfigurationResponse * const q);

    void parseUpdateDevicePolicyConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDevicePolicyConfigurationResponse)
    Q_DISABLE_COPY(UpdateDevicePolicyConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
