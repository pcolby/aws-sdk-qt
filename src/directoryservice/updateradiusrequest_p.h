// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERADIUSREQUEST_P_H
#define QTAWS_UPDATERADIUSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "updateradiusrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateRadiusRequest;

class UpdateRadiusRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    UpdateRadiusRequestPrivate(const DirectoryServiceRequest::Action action,
                                   UpdateRadiusRequest * const q);
    UpdateRadiusRequestPrivate(const UpdateRadiusRequestPrivate &other,
                                   UpdateRadiusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRadiusRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
