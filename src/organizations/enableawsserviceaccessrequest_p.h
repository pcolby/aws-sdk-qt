// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSSERVICEACCESSREQUEST_P_H
#define QTAWS_ENABLEAWSSERVICEACCESSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "enableawsserviceaccessrequest.h"

namespace QtAws {
namespace Organizations {

class EnableAWSServiceAccessRequest;

class EnableAWSServiceAccessRequestPrivate : public OrganizationsRequestPrivate {

public:
    EnableAWSServiceAccessRequestPrivate(const OrganizationsRequest::Action action,
                                   EnableAWSServiceAccessRequest * const q);
    EnableAWSServiceAccessRequestPrivate(const EnableAWSServiceAccessRequestPrivate &other,
                                   EnableAWSServiceAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAWSServiceAccessRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
