// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKCHANNELCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTSLACKCHANNELCONFIGURATIONSREQUEST_P_H

#include "supportapprequest_p.h"
#include "listslackchannelconfigurationsrequest.h"

namespace QtAws {
namespace SupportApp {

class ListSlackChannelConfigurationsRequest;

class ListSlackChannelConfigurationsRequestPrivate : public SupportAppRequestPrivate {

public:
    ListSlackChannelConfigurationsRequestPrivate(const SupportAppRequest::Action action,
                                   ListSlackChannelConfigurationsRequest * const q);
    ListSlackChannelConfigurationsRequestPrivate(const ListSlackChannelConfigurationsRequestPrivate &other,
                                   ListSlackChannelConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSlackChannelConfigurationsRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
