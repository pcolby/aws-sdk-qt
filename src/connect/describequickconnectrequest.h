// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUICKCONNECTREQUEST_H
#define QTAWS_DESCRIBEQUICKCONNECTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeQuickConnectRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeQuickConnectRequest : public ConnectRequest {

public:
    DescribeQuickConnectRequest(const DescribeQuickConnectRequest &other);
    DescribeQuickConnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQuickConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
