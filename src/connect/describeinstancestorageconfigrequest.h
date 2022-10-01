// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTORAGECONFIGREQUEST_H
#define QTAWS_DESCRIBEINSTANCESTORAGECONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceStorageConfigRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeInstanceStorageConfigRequest : public ConnectRequest {

public:
    DescribeInstanceStorageConfigRequest(const DescribeInstanceStorageConfigRequest &other);
    DescribeInstanceStorageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
