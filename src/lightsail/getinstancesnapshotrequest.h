// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTREQUEST_H
#define QTAWS_GETINSTANCESNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceSnapshotRequest : public LightsailRequest {

public:
    GetInstanceSnapshotRequest(const GetInstanceSnapshotRequest &other);
    GetInstanceSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
