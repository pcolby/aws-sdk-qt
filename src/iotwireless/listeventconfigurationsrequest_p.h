// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTEVENTCONFIGURATIONSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listeventconfigurationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListEventConfigurationsRequest;

class ListEventConfigurationsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListEventConfigurationsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListEventConfigurationsRequest * const q);
    ListEventConfigurationsRequestPrivate(const ListEventConfigurationsRequestPrivate &other,
                                   ListEventConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventConfigurationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
