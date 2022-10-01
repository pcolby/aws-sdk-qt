// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKPROFILEREQUEST_P_H
#define QTAWS_CREATENETWORKPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createnetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateNetworkProfileRequest;

class CreateNetworkProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateNetworkProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateNetworkProfileRequest * const q);
    CreateNetworkProfileRequestPrivate(const CreateNetworkProfileRequestPrivate &other,
                                   CreateNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
