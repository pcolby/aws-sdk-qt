// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELDAPSREQUEST_P_H
#define QTAWS_DISABLELDAPSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "disableldapsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableLDAPSRequest;

class DisableLDAPSRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DisableLDAPSRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DisableLDAPSRequest * const q);
    DisableLDAPSRequestPrivate(const DisableLDAPSRequestPrivate &other,
                                   DisableLDAPSRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableLDAPSRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
