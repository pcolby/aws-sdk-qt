// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONREQUEST_H
#define QTAWS_DESCRIBEPROTECTIONREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeProtectionRequest : public ShieldRequest {

public:
    DescribeProtectionRequest(const DescribeProtectionRequest &other);
    DescribeProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProtectionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
