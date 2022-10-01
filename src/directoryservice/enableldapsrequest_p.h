// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELDAPSREQUEST_P_H
#define QTAWS_ENABLELDAPSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "enableldapsrequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableLDAPSRequest;

class EnableLDAPSRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    EnableLDAPSRequestPrivate(const DirectoryServiceRequest::Action action,
                                   EnableLDAPSRequest * const q);
    EnableLDAPSRequestPrivate(const EnableLDAPSRequestPrivate &other,
                                   EnableLDAPSRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableLDAPSRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
