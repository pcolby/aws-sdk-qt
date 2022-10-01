// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSSERVICEACCESSREQUEST_P_H
#define QTAWS_DISABLEAWSSERVICEACCESSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "disableawsserviceaccessrequest.h"

namespace QtAws {
namespace Organizations {

class DisableAWSServiceAccessRequest;

class DisableAWSServiceAccessRequestPrivate : public OrganizationsRequestPrivate {

public:
    DisableAWSServiceAccessRequestPrivate(const OrganizationsRequest::Action action,
                                   DisableAWSServiceAccessRequest * const q);
    DisableAWSServiceAccessRequestPrivate(const DisableAWSServiceAccessRequestPrivate &other,
                                   DisableAWSServiceAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableAWSServiceAccessRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
