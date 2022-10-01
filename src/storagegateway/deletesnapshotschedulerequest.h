// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTSCHEDULEREQUEST_H
#define QTAWS_DELETESNAPSHOTSCHEDULEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteSnapshotScheduleRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteSnapshotScheduleRequest : public StorageGatewayRequest {

public:
    DeleteSnapshotScheduleRequest(const DeleteSnapshotScheduleRequest &other);
    DeleteSnapshotScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
