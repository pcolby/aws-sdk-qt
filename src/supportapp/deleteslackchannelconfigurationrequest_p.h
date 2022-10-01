// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKCHANNELCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETESLACKCHANNELCONFIGURATIONREQUEST_P_H

#include "supportapprequest_p.h"
#include "deleteslackchannelconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackChannelConfigurationRequest;

class DeleteSlackChannelConfigurationRequestPrivate : public SupportAppRequestPrivate {

public:
    DeleteSlackChannelConfigurationRequestPrivate(const SupportAppRequest::Action action,
                                   DeleteSlackChannelConfigurationRequest * const q);
    DeleteSlackChannelConfigurationRequestPrivate(const DeleteSlackChannelConfigurationRequestPrivate &other,
                                   DeleteSlackChannelConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSlackChannelConfigurationRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
