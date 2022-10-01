// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTREQUEST_H
#define QTAWS_UPDATESNAPSHOTREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateSnapshotRequestPrivate;

class QTAWSGAMESPARKS_EXPORT UpdateSnapshotRequest : public GameSparksRequest {

public:
    UpdateSnapshotRequest(const UpdateSnapshotRequest &other);
    UpdateSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSnapshotRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
