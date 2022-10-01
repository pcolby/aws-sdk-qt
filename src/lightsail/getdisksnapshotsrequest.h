// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTSREQUEST_H
#define QTAWS_GETDISKSNAPSHOTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDiskSnapshotsRequest : public LightsailRequest {

public:
    GetDiskSnapshotsRequest(const GetDiskSnapshotsRequest &other);
    GetDiskSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiskSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
