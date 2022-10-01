// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "createapplicationrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class CreateApplicationRequest;

class CreateApplicationRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    CreateApplicationRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   CreateApplicationRequest * const q);
    CreateApplicationRequestPrivate(const CreateApplicationRequestPrivate &other,
                                   CreateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
