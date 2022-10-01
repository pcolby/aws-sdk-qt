// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILEREQUEST_P_H
#define QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "associatedevicewithnetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithNetworkProfileRequest;

class AssociateDeviceWithNetworkProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    AssociateDeviceWithNetworkProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   AssociateDeviceWithNetworkProfileRequest * const q);
    AssociateDeviceWithNetworkProfileRequestPrivate(const AssociateDeviceWithNetworkProfileRequestPrivate &other,
                                   AssociateDeviceWithNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDeviceWithNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
