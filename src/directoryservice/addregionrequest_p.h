// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDREGIONREQUEST_P_H
#define QTAWS_ADDREGIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "addregionrequest.h"

namespace QtAws {
namespace DirectoryService {

class AddRegionRequest;

class AddRegionRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    AddRegionRequestPrivate(const DirectoryServiceRequest::Action action,
                                   AddRegionRequest * const q);
    AddRegionRequestPrivate(const AddRegionRequestPrivate &other,
                                   AddRegionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddRegionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
