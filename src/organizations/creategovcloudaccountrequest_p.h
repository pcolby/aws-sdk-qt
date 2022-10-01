// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGOVCLOUDACCOUNTREQUEST_P_H
#define QTAWS_CREATEGOVCLOUDACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "creategovcloudaccountrequest.h"

namespace QtAws {
namespace Organizations {

class CreateGovCloudAccountRequest;

class CreateGovCloudAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    CreateGovCloudAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   CreateGovCloudAccountRequest * const q);
    CreateGovCloudAccountRequestPrivate(const CreateGovCloudAccountRequestPrivate &other,
                                   CreateGovCloudAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGovCloudAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
