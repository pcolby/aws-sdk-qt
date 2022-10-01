// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKPROFILEREQUEST_P_H
#define QTAWS_GETNETWORKPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getnetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetNetworkProfileRequest;

class GetNetworkProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetNetworkProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetNetworkProfileRequest * const q);
    GetNetworkProfileRequestPrivate(const GetNetworkProfileRequestPrivate &other,
                                   GetNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
