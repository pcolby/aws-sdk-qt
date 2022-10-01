// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMSNAPSHOTREQUEST_H
#define QTAWS_RESTOREFROMSNAPSHOTREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class RestoreFromSnapshotRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RestoreFromSnapshotRequest : public DirectoryServiceRequest {

public:
    RestoreFromSnapshotRequest(const RestoreFromSnapshotRequest &other);
    RestoreFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreFromSnapshotRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
