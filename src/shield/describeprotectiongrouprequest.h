// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONGROUPREQUEST_H
#define QTAWS_DESCRIBEPROTECTIONGROUPREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionGroupRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeProtectionGroupRequest : public ShieldRequest {

public:
    DescribeProtectionGroupRequest(const DescribeProtectionGroupRequest &other);
    DescribeProtectionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
