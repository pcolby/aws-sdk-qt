// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYOPTIONSREQUEST_P_H
#define QTAWS_UPDATEAVAILABILITYOPTIONSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "updateavailabilityoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateAvailabilityOptionsRequest;

class UpdateAvailabilityOptionsRequestPrivate : public CloudSearchRequestPrivate {

public:
    UpdateAvailabilityOptionsRequestPrivate(const CloudSearchRequest::Action action,
                                   UpdateAvailabilityOptionsRequest * const q);
    UpdateAvailabilityOptionsRequestPrivate(const UpdateAvailabilityOptionsRequestPrivate &other,
                                   UpdateAvailabilityOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAvailabilityOptionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
