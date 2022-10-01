// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSREQUEST_P_H
#define QTAWS_LISTCONFIGURATIONSETSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "listconfigurationsetsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListConfigurationSetsRequest;

class ListConfigurationSetsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    ListConfigurationSetsRequestPrivate(const PinpointEmailRequest::Action action,
                                   ListConfigurationSetsRequest * const q);
    ListConfigurationSetsRequestPrivate(const ListConfigurationSetsRequestPrivate &other,
                                   ListConfigurationSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigurationSetsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
