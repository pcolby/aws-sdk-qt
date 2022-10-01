// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILEREQUEST_H
#define QTAWS_DESCRIBESECURITYPROFILEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeSecurityProfileRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeSecurityProfileRequest : public ConnectRequest {

public:
    DescribeSecurityProfileRequest(const DescribeSecurityProfileRequest &other);
    DescribeSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
