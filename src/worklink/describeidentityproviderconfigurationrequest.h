// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeIdentityProviderConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT DescribeIdentityProviderConfigurationRequest : public WorkLinkRequest {

public:
    DescribeIdentityProviderConfigurationRequest(const DescribeIdentityProviderConfigurationRequest &other);
    DescribeIdentityProviderConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityProviderConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
