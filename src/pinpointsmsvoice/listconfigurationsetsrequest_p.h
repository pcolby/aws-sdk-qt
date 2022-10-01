// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSREQUEST_P_H
#define QTAWS_LISTCONFIGURATIONSETSREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "listconfigurationsetsrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class ListConfigurationSetsRequest;

class ListConfigurationSetsRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    ListConfigurationSetsRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   ListConfigurationSetsRequest * const q);
    ListConfigurationSetsRequestPrivate(const ListConfigurationSetsRequestPrivate &other,
                                   ListConfigurationSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigurationSetsRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
