// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTREQUEST_P_H
#define QTAWS_UPDATETRUSTREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "updatetrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateTrustRequest;

class UpdateTrustRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    UpdateTrustRequestPrivate(const DirectoryServiceRequest::Action action,
                                   UpdateTrustRequest * const q);
    UpdateTrustRequestPrivate(const UpdateTrustRequestPrivate &other,
                                   UpdateTrustRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
