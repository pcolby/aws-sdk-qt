// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSnapshotsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeSnapshotsRequest : public DirectoryServiceRequest {

public:
    DescribeSnapshotsRequest(const DescribeSnapshotsRequest &other);
    DescribeSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
