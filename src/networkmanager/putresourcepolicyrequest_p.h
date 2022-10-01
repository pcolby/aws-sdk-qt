// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEPOLICYREQUEST_P_H
#define QTAWS_PUTRESOURCEPOLICYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "putresourcepolicyrequest.h"

namespace QtAws {
namespace NetworkManager {

class PutResourcePolicyRequest;

class PutResourcePolicyRequestPrivate : public NetworkManagerRequestPrivate {

public:
    PutResourcePolicyRequestPrivate(const NetworkManagerRequest::Action action,
                                   PutResourcePolicyRequest * const q);
    PutResourcePolicyRequestPrivate(const PutResourcePolicyRequestPrivate &other,
                                   PutResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResourcePolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
