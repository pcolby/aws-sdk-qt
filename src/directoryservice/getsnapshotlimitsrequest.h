// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTLIMITSREQUEST_H
#define QTAWS_GETSNAPSHOTLIMITSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class GetSnapshotLimitsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT GetSnapshotLimitsRequest : public DirectoryServiceRequest {

public:
    GetSnapshotLimitsRequest(const GetSnapshotLimitsRequest &other);
    GetSnapshotLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotLimitsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
