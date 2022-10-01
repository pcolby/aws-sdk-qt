// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESFROMSNAPSHOTREQUEST_H
#define QTAWS_CREATEINSTANCESFROMSNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesFromSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateInstancesFromSnapshotRequest : public LightsailRequest {

public:
    CreateInstancesFromSnapshotRequest(const CreateInstancesFromSnapshotRequest &other);
    CreateInstancesFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstancesFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
