// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERREQUEST_H
#define QTAWS_DESCRIBEUSERREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeUserRequest : public ConnectRequest {

public:
    DescribeUserRequest(const DescribeUserRequest &other);
    DescribeUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
