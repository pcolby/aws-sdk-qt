// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULEREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSnapshotScheduleRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeSnapshotScheduleRequest : public StorageGatewayRequest {

public:
    DescribeSnapshotScheduleRequest(const DescribeSnapshotScheduleRequest &other);
    DescribeSnapshotScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
