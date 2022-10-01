// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPROFILESREQUEST_P_H
#define QTAWS_LISTSERVICEPROFILESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listserviceprofilesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListServiceProfilesRequest;

class ListServiceProfilesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListServiceProfilesRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListServiceProfilesRequest * const q);
    ListServiceProfilesRequestPrivate(const ListServiceProfilesRequestPrivate &other,
                                   ListServiceProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceProfilesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
