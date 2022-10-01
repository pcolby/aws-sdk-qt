// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describeclientauthenticationsettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeClientAuthenticationSettingsRequest;

class DescribeClientAuthenticationSettingsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeClientAuthenticationSettingsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeClientAuthenticationSettingsRequest * const q);
    DescribeClientAuthenticationSettingsRequestPrivate(const DescribeClientAuthenticationSettingsRequestPrivate &other,
                                   DescribeClientAuthenticationSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientAuthenticationSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
