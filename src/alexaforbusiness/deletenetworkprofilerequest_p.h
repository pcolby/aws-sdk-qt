// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKPROFILEREQUEST_P_H
#define QTAWS_DELETENETWORKPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletenetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteNetworkProfileRequest;

class DeleteNetworkProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteNetworkProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteNetworkProfileRequest * const q);
    DeleteNetworkProfileRequestPrivate(const DeleteNetworkProfileRequestPrivate &other,
                                   DeleteNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
