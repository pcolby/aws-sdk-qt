// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONREQUEST_P_H
#define QTAWS_REMOVEREGIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "removeregionrequest.h"

namespace QtAws {
namespace DirectoryService {

class RemoveRegionRequest;

class RemoveRegionRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    RemoveRegionRequestPrivate(const DirectoryServiceRequest::Action action,
                                   RemoveRegionRequest * const q);
    RemoveRegionRequestPrivate(const RemoveRegionRequestPrivate &other,
                                   RemoveRegionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveRegionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
