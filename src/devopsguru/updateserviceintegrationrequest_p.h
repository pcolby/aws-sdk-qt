// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINTEGRATIONREQUEST_P_H
#define QTAWS_UPDATESERVICEINTEGRATIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "updateserviceintegrationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateServiceIntegrationRequest;

class UpdateServiceIntegrationRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    UpdateServiceIntegrationRequestPrivate(const DevOpsGuruRequest::Action action,
                                   UpdateServiceIntegrationRequest * const q);
    UpdateServiceIntegrationRequestPrivate(const UpdateServiceIntegrationRequestPrivate &other,
                                   UpdateServiceIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceIntegrationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
