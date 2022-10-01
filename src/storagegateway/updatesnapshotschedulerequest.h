// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTSCHEDULEREQUEST_H
#define QTAWS_UPDATESNAPSHOTSCHEDULEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSnapshotScheduleRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSnapshotScheduleRequest : public StorageGatewayRequest {

public:
    UpdateSnapshotScheduleRequest(const UpdateSnapshotScheduleRequest &other);
    UpdateSnapshotScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSnapshotScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
