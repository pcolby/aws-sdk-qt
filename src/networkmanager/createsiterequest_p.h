// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITEREQUEST_P_H
#define QTAWS_CREATESITEREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createsiterequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteRequest;

class CreateSiteRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateSiteRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateSiteRequest * const q);
    CreateSiteRequestPrivate(const CreateSiteRequestPrivate &other,
                                   CreateSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSiteRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
