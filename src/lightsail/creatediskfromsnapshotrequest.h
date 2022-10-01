// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKFROMSNAPSHOTREQUEST_H
#define QTAWS_CREATEDISKFROMSNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskFromSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDiskFromSnapshotRequest : public LightsailRequest {

public:
    CreateDiskFromSnapshotRequest(const CreateDiskFromSnapshotRequest &other);
    CreateDiskFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDiskFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
