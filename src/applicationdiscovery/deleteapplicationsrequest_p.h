// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "deleteapplicationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DeleteApplicationsRequest;

class DeleteApplicationsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DeleteApplicationsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DeleteApplicationsRequest * const q);
    DeleteApplicationsRequestPrivate(const DeleteApplicationsRequestPrivate &other,
                                   DeleteApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
