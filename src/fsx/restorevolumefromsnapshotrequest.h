// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREVOLUMEFROMSNAPSHOTREQUEST_H
#define QTAWS_RESTOREVOLUMEFROMSNAPSHOTREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class RestoreVolumeFromSnapshotRequestPrivate;

class QTAWSFSX_EXPORT RestoreVolumeFromSnapshotRequest : public FSxRequest {

public:
    RestoreVolumeFromSnapshotRequest(const RestoreVolumeFromSnapshotRequest &other);
    RestoreVolumeFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreVolumeFromSnapshotRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
