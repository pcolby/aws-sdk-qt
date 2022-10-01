// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTREQUEST_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseSnapshotRequest : public LightsailRequest {

public:
    GetRelationalDatabaseSnapshotRequest(const GetRelationalDatabaseSnapshotRequest &other);
    GetRelationalDatabaseSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
