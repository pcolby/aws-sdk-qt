// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOSITIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTPOSITIONCONFIGURATIONSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listpositionconfigurationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListPositionConfigurationsRequest;

class ListPositionConfigurationsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListPositionConfigurationsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListPositionConfigurationsRequest * const q);
    ListPositionConfigurationsRequestPrivate(const ListPositionConfigurationsRequestPrivate &other,
                                   ListPositionConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPositionConfigurationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
