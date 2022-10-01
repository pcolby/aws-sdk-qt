// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeInstanceAccessControlAttributeConfigurationRequestPrivate;

class QTAWSSSOADMIN_EXPORT DescribeInstanceAccessControlAttributeConfigurationRequest : public SsoAdminRequest {

public:
    DescribeInstanceAccessControlAttributeConfigurationRequest(const DescribeInstanceAccessControlAttributeConfigurationRequest &other);
    DescribeInstanceAccessControlAttributeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
