// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLACKCHANNELCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATESLACKCHANNELCONFIGURATIONREQUEST_P_H

#include "supportapprequest_p.h"
#include "createslackchannelconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class CreateSlackChannelConfigurationRequest;

class CreateSlackChannelConfigurationRequestPrivate : public SupportAppRequestPrivate {

public:
    CreateSlackChannelConfigurationRequestPrivate(const SupportAppRequest::Action action,
                                   CreateSlackChannelConfigurationRequest * const q);
    CreateSlackChannelConfigurationRequestPrivate(const CreateSlackChannelConfigurationRequestPrivate &other,
                                   CreateSlackChannelConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSlackChannelConfigurationRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
