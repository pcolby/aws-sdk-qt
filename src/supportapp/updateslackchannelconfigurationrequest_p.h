// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLACKCHANNELCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATESLACKCHANNELCONFIGURATIONREQUEST_P_H

#include "supportapprequest_p.h"
#include "updateslackchannelconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class UpdateSlackChannelConfigurationRequest;

class UpdateSlackChannelConfigurationRequestPrivate : public SupportAppRequestPrivate {

public:
    UpdateSlackChannelConfigurationRequestPrivate(const SupportAppRequest::Action action,
                                   UpdateSlackChannelConfigurationRequest * const q);
    UpdateSlackChannelConfigurationRequestPrivate(const UpdateSlackChannelConfigurationRequestPrivate &other,
                                   UpdateSlackChannelConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSlackChannelConfigurationRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
