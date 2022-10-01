// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSREQUEST_H
#define QTAWS_LISTSNAPSHOTSREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListSnapshotsRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListSnapshotsRequest : public GameSparksRequest {

public:
    ListSnapshotsRequest(const ListSnapshotsRequest &other);
    ListSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSnapshotsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
