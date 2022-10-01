// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABILITYCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTAVAILABILITYCONFIGURATIONSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listavailabilityconfigurationsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAvailabilityConfigurationsRequest;

class ListAvailabilityConfigurationsRequestPrivate : public WorkMailRequestPrivate {

public:
    ListAvailabilityConfigurationsRequestPrivate(const WorkMailRequest::Action action,
                                   ListAvailabilityConfigurationsRequest * const q);
    ListAvailabilityConfigurationsRequestPrivate(const ListAvailabilityConfigurationsRequestPrivate &other,
                                   ListAvailabilityConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailabilityConfigurationsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
