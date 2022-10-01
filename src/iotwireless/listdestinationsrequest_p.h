// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDESTINATIONSREQUEST_P_H
#define QTAWS_LISTDESTINATIONSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listdestinationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListDestinationsRequest;

class ListDestinationsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListDestinationsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListDestinationsRequest * const q);
    ListDestinationsRequestPrivate(const ListDestinationsRequestPrivate &other,
                                   ListDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDestinationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
