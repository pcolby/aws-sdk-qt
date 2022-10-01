// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSNAPSHOTREQUEST_H
#define QTAWS_EXPORTSNAPSHOTREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ExportSnapshotRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ExportSnapshotRequest : public GameSparksRequest {

public:
    ExportSnapshotRequest(const ExportSnapshotRequest &other);
    ExportSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportSnapshotRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
