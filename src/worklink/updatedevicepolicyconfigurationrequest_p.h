// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "updatedevicepolicyconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateDevicePolicyConfigurationRequest;

class UpdateDevicePolicyConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    UpdateDevicePolicyConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   UpdateDevicePolicyConfigurationRequest * const q);
    UpdateDevicePolicyConfigurationRequestPrivate(const UpdateDevicePolicyConfigurationRequestPrivate &other,
                                   UpdateDevicePolicyConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDevicePolicyConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
